/*
 *	symtab.C
 */
#include <iostream.h>
#include <string.h>

#include "symtab.h"
/* end-header */

PSymtabCls ScopeCls::vista = 0; // define static member

SymtabEntryCls :: SymtabEntryCls(char *Name) {
    //cout << "SymtabEntryCls()" << endl;
    name = Name;
}

int SymtabEntryCls :: emit() {
    cout << "SymtabEntryCls::emit() BASE CLASS!!!!" << endl;
    return 0;
}

VarAttCls :: VarAttCls(char *Name, int Value) :
				SymtabEntryCls(Name){
    //cout << "VarAttCls(Name,Value) " << endl;
    value = Value;
}

void VarAttCls :: set_value(int Value) {
    //cout << "VarAttCls::set_value()" << endl;
    value = Value;
}

/* end-attributes */

/* begin-symtab */
/* ******************************************************************** */
/*
 *	SymtabCls
 */
/* ******************************************************************** */
SymtabCls :: SymtabCls() {
    //cout << "SymtabCls::()"<< endl;
    tablesize = 17;     //Must be a prime for good performance
    hashtable = new int[tablesize];
    next_location = 1;  // sacrifice 0th spot - hashtable empty:NIL
    symtab = new PSymtabEntryCls[tablesize]; // Note "P" !!!!
    PSymtabEntryCls tmp = new SymtabEntryCls("     ");
    for (int i=0; i<tablesize; i++) { 
	hashtable[i] = 0;
	symtab[i] = tmp;
    }
}

int SymtabCls :: hash(char *s) {
    //cout << "SymtabCls :: hashing for " << s ;
    char* ss = s;
    unsigned int h = 0, g;
    for (; *ss != '\0'; ss++) {
	h = (h << 4) + *ss;
	if (g = h & 0xf0000000) {
	    h ^= g >> 24;	// fold top 4 bits onto ------X-
	    h ^= g;		// clear top 4 bits
	}
    }
    //cout << "hashing to " << h % tablesize << endl;
    return h % tablesize ;
}

int SymtabCls :: insert(PSymtabEntryCls info) { 
    //cout << "SymtabCls::insert()" << endl;
    //Return 0 if insert successful; else location in symtab.

    //Look for open slot in the hashtable....
    int Try, hash_try; //`try' can be a reserved word 
    char *Name = info -> name;
    //cout<<"preparing to enter"<<Name<<"\n";
    Try = hash(Name);
    //cout << "preparing to go into hash table at " << Try << endl;
	
    while (hash_try = hashtable[Try]) { //something's in hashtable
	//Check to see if it's the same thing we want to insert...
	if (!strcmp((symtab[hash_try] -> name), Name)) {
	    return hash_try; //it's already there!
	} else if (++Try >= tablesize) {
	    //resolve collision by looking for open spot ...
	    Try = 0; //wrap around 
	}
	//Mature (growing) tables can be at most 2/3 full, 
    }
    // So an open spot MUST be found
    hashtable[Try] = next_location;
    //cout << "entered current loc'n in table " << Try << endl;
    symtab[next_location++] = info; //Since they're both pointers
    return 0; // success!
}

PSymtabEntryCls SymtabCls :: lookup(char *Name) { 
    //cout << "SymtabCls :: lookup for " << Name ;
    int cur_table_size = tablesize;
    int Try, orig_try, hash_try;

    orig_try = Try = hash(Name);
//cout << "orig_try " << orig_try << "\n";
    hash_try = hashtable[Try];
//cout << "hash_try " << hash_try << endl;
    while (hash_try) {
	if (!strcmp(symtab[hash_try] -> name, Name)) {
	    return symtab[hash_try];
	}
	if (++Try >= cur_table_size) Try = 0; // wrap around
	if (Try == orig_try) {
	    return symtab[0];
	} else {
	    hash_try = hashtable[Try];
	}
//cout << "hash_try " << hash_try << endl;
    }
	return 0; //Failure!
}

