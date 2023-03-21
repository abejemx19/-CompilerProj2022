/* header */
/*
 *	ctrl.cpp  ControllerCls Implementation Module
 */

#include <iostream>
#include <stdio.h>
#include <string.h>

#include "../scanparse/scanparse.h"

#include "../symtab/symtab.h"

#include "ctrl.h"
/* end-header */
using namespace std;
//globals -------------------------------------------
int Options::setflags = 0;
PSymtable symtable;

//end globals ----------

Options :: Options() {
    //cout << "Options() " << endl;
}

//public accessor returns true if flag was set on command line
int Options :: flags(char f) {
    switch(f){
    case 'l': return setflags & 1; //list source line
    case 't': return setflags & 2; //display each token
    case 'r': return setflags & 4; //display rule reduced
    case 'e': return setflags & 8; //emit code generated
    case 'T': return setflags &16; //???
    case '*': return setflags;
    default : return 0;
    }
}
/* end-Options */

int  Controller :: open_file(char* source_file) {
    cout << "//>>>> Controller::open_file()=" << source_file << endl;
    int length = strlen(source_file);
    	//Check for  .p  extension
    if ((length > 1) && ((source_file[length -2] == '.') &&
    		         (source_file[length -1] == 'p')  )) {
	if (!freopen(source_file, "r", stdin)) {
	    cout << "	Cannot open file -- Sorry " << endl;
	    //should be done by an ErrorCls object 
	    return 0;
	} else {
	    return 1;
	}
    } else if (length == 0) {
        cout << "	No file specified" << endl;
        return 0;
    } else {
        cout << "	File must have a  .p  extension" << endl;
        //should be done by an ErrorCls object 
	return 0;
    }
}
/* end-Controller-open */

Controller :: Controller(int argc, char** argv) {
    //cout << "Controller() " << endl;


    this -> sym_table = new Symtable; 
    symtable = this -> sym_table;

    //PScopeCls scp = new ScopeCls;
    //scp -> vista = this -> sym_table;

    char *source_file = new char[80];
    this -> parse_tree = 0;
    if (argc <= 1) {
	cout << "	Usage:  epc [-elrtT] <filename>.p" << endl;
	return;
    } else {
	for (int i = 1; i < argc; i++) {
	    if (*argv[i] == '-') {
		while (*++argv[i]) {
		    switch(*argv[i]) {
		    case 'l':
			Options :: setflags |= 1;
			break;

		    case 't':
			Options :: setflags |= 2;
			break;

		    case 'r':
			Options :: setflags |= 4;
			break;

		    case 'e':
			Options :: setflags |= 8;
			break;

		    case 'T':
			Options :: setflags |= 16 |2;
			break;

		    default:
			cerr << "Unknown option " << 
					*argv[i] << endl;
		    }
		}
	    } else {
	        source_file = argv[i];
	    }
	}
    }
    if (open_file(source_file)) {
	ios::sync_with_stdio();
	PScanParser sp = new ScanParser;
	/* all code generation is done in the ScanParser
	this -> parse_tree = sp -> parse_tree;

	if (Options::emit) {
	    parse_tree -> emit();
	} else {
	    parse_tree -> execute();
	}
	*/
    }
}
/* end-Controller-Cont */    
