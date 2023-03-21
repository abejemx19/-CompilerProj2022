/*
 *	symtab.cpp
 */
#include <iostream>
#include <string.h>

#include "symtab.h"
/* end-header */
using namespace std;

SymtabEntry :: SymtabEntry(char *Name) {
    //cout << "SymtabEntry()" << endl;
    name = new char[strlen(Name)]; //create name space
    strcpy(name,Name);
}


/* begin-symtab */
/* ******************************************************************** */
/*
 *	Symtable
 */
/* ******************************************************************** */
Symtable :: Symtable() {
    //cout << "Symtable::()"<< endl;
    tablesize = 103;     //Use a prime in case skip increment is not 1
    hashtable = new int[tablesize];
    next_location = 1;  // sacrifice 0th spot - hashtable empty:NIL
    symtab = new PSymtabEntry[tablesize]; // Note "P" !!!!
    char * empty = new char[7];
    strcpy(empty, "      ");
    PSymtabEntry tmp = new SymtabEntry(empty);
    for (int i=0; i<tablesize; i++) { 
	hashtable[i] = 0;
	symtab[i] = tmp;
    }
}

int Symtable :: hash(char *s) {
    //cout << "Symtable :: hashing for " << s ;
    char* ss = s;
    unsigned int h = 0, g;
    for (; *ss != '\0'; ss++) {
	h = (h << 4) + *ss;
	if ((g = h & 0xf0000000)) {
	    h ^= g >> 24;	// fold top 4 bits onto ------X-
	    h ^= g;		// clear top 4 bits
	}
    }
    //cout << "hashing to " << h % tablesize << endl;
    return h % tablesize ;
}

int Symtable :: insert(PSymtabEntry info) { 
    //cout << "Symtable::insert()" << endl;
    //Return 0 if insert successful; else location in symtab.

    //Look for open slot in the hashtable....
    int Try, hash_try; //`try' can be a reserved word 
    char *Name = info->getName();
    //cout<<"preparing to enter"<<Name<<"\n";
    Try = hash(Name);
    //cout << "preparing to go into hash table at " << Try << endl;
	
    while ((hash_try = hashtable[Try])) { //something's in hashtable
		//Check to see if it's the same thing we want to insert...
	if (!strcmp((symtab[hash_try]->getName()), Name)) {
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

    //************ NOTE!! KLUDGE CODE ***********************
    //the following line should be handled in parser.gram
    //and not arbitrarily assign an address
    //that matches the hashtable pointer like this
    info->setAddress(next_location); 

    symtab[next_location++] = info; //Since they're both pointers
    return 0; // success!
}

void Symtable :: dump()
{
	//not going to be in alphabetical order
	int i,h;
	for (i=0; i<tablesize; i++){
	    if((h = hashtable[i])) { //something's there
		cout << symtab[h]->getName() << ": " << endl;
		cout << "SymType=" << symtab[h]->getSymbolType() << endl;
		cout << "DataType=" << symtab[h]->getDataType()  << endl;
		cout << "["<< symtab[h]->getLowRange()<< ":" << symtab[h]->getHighRange() << "]" << endl;
		cout << "value: " << symtab[h]->get_value() << endl;
		cout << "realvalue: " << symtab[h]->get_realvalue() << endl;
		cout << "address: " << symtab[h]->getAddress() << endl;
		cout << endl;
	    }
	}
}
PSymtabEntry Symtable :: lookup(char *Name) { 
    //cout << "Symtable :: lookup for " << Name ;
    int cur_table_size = tablesize;
    int Try, orig_try, hash_try;

    orig_try = Try = hash(Name);
//cout << "orig_try " << orig_try << "\n";
    hash_try = hashtable[Try];
//cout << "hash_try " << hash_try << endl;
    while (hash_try) {
	if (!strcmp(symtab[hash_try]->getName(), Name)) {
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

