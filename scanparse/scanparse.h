/*
 *	scanparse.h
 *          LKR  8/2015  comments added
 */
#include "scanner.h"
#include "parser.h"

// LexToken object holds the lexical token info
typedef class LexToken *PLexToken;
class LexToken {
  public:
	LexToken(int LineNo, int Token, char *Lexeme);
	LexToken(int LineNo, int Token, char *Lexeme, int sc);
	char*	getLexeme() {return lexeme;}
	int	getLineNo() {return line_no;}
	int	getToken()  {return token;}
	int	getSubcode() {return subcode;}
	void    setSubcode(int d) {subcode = d;}	

  private:
	int	line_no; //source line number
	char   *lexeme;  //original lexical token
	int	token;   //primary token code used by parser engine
	int	subcode; //subcategory token code used by code generation
};

class Controller;
class PTree;

// Parser object using optional parse tree from controller
typedef class ScanParser *PScanParser;
class ScanParser {
  public:
	ScanParser();
	void	    print();
	friend class Controller;
  private:
	PTree    *parse_tree; //optional --but points to Controller's object
};
