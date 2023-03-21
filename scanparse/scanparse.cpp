
/* 
 *	scanparse.cpp
 *        LKR 8/2015 comments added
 */


#include <iostream>

#include <string.h>

#include "../ctrl/ctrl.h"
#include "scanparse.h"
#include "scanparse.fct"
extern int listtok;

//  constructor, prints info optinally, records info
LexToken :: LexToken(int LineNo, int Token, char *Lexeme) {

         //print token trace; example how to use Options flags
    if(Options::flags('t')){
         std::cout << "//++++Token: LineNo="<<LineNo<< " Token="<<Token<<
              " Lexeme='"<<Lexeme<<"'" << std::endl;
    }
    line_no = LineNo;
    token   = Token;
    subcode = 0;    //this can be set later in the parsing
    if (Lexeme) {   
    	lexeme = new char[strlen(Lexeme)+1];
        strcpy(lexeme,Lexeme);
    } else {      // hopefully this else isn't called when your parser works
	lexeme = new char[1];
	lexeme[0]='\0';
    }
} 
LexToken :: LexToken(int LineNo, int Token, char *Lexeme, int sc) {

         //print token trace; example how to use Options flags
    if(Options::flags('t')){
         std::cout << "//++++Token: LineNo="<<LineNo<< " Token="<<Token<<
              " Lexeme='"<<Lexeme<<"'" << std::endl;
    }
    line_no = LineNo;
    token   = Token;
    subcode = sc;
    if (Lexeme) {
    	lexeme = new char[strlen(Lexeme)+1];
        strcpy(lexeme,Lexeme);
    } else {      // hopefully this else isn't called when your parser works
	lexeme = new char[1];
	lexeme[0]='\0';
    }
} 

//	end_LexToken


// kicks off the generated parser!
ScanParser :: ScanParser() {
    if(Options::flags('T')){
	  std::cout << "********T O K E N    T R A C E  only *******" << std::endl;
	  //call yylex() repeatedly
	  while(1){
	     int tk = yylex();
             //cout << "TOKEN CODE="<<tk <<endl;
	     if (tk<=0) break;
	     }
	  std::cout << "********END TOKEN TRACE"<<std::endl;
    } else {
         std::cout << "//>>>> Starting parser via ScanParser()" << std::endl;

         yyparse();
    }

}
//	end_ScanParser
