/*
 *	main.cpp  -- For Example Pascal Compiler
	Ryotaro and Miki
 *      LKR updated comments 8/2015
 */

#include <iostream>

#include "../ctrl/ctrl.h"
using namespace std;

int main(int argc, char** argv) {
	//emit the prologue code as include statement
	//make changes to the prologue file--don't add code here
    cout << "//>>>> Begin Example Pascal Compiler <<<<" << endl;
    cout << "#include \"stackmachine.pro\""<<endl;

	//do the compiling via instantiating the Controller object
    PController ctl = new Controller(argc,argv);

	//emit the epilogue code
	//make changes to the epilogue file--don't add code here
    cout << "#include \"stackmachine.epi\""<<endl;
    cout << "//>>>>  End  Example Pascal Compiler <<<<" << endl;
}
