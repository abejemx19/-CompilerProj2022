#include "symtab.h"
#include <iostream>
#include "string.h"
#include <string>
#include <sstream>
using namespace std;
/*Edited by Ryo and Miki*/

int main(){
   PSymtable symtab = new Symtable;
   char symbol[50];

   int found;

   while(cin>>symbol){
	if(strcmp(symbol,"exit")==0) break;
	PSymtabEntry entry = symtab->lookup(symbol);
	if(entry) {
		cout << symbol << " is in the table @ "<< (long)entry << endl;
		cout << "input the value" << endl;
                string inputval;
                cin >> inputval;
                if(inputval.find_first_of("eE.")!=string::npos){
                    entry -> set_realvalue(inputval);
                } else {
		    stringstream ss;
		    int inputintval;
		    ss << inputval;
		    ss >> inputintval;
                    entry -> set_value(inputintval);
                }
	} else {
		cout << symbol << " will be added to the table." ;
	entry = new SymtabEntry(symbol);
		cout << "what is its address?";
		int address;
		cin  >> address;
		cout << "address="<< (long)entry << endl;
		found = symtab->insert(entry);
		entry -> setAddress(address);
		int dt;
                cout << "data type? ";
                cin >> dt;
                entry -> setDataType((DataTypeType)dt);
		cout << "found=" << found << endl;
	}
   }
   symtab->dump();
}

