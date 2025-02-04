#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
# define U(x) x
# define NLSTATE yyprevious=YYNEWLINE
# define BEGIN yybgin = yysvec + 1 +
# define INITIAL 0
# define YYLERR yysvec
# define YYSTATE (yyestate-yysvec-1)
# define YYOPTIM 1
# ifndef YYLMAX 
# define YYLMAX BUFSIZ
# endif 
#ifndef __cplusplus
# define output(c) (void)putc(c,yyout)
#else
# define lex_output(c) (void)putc(c,yyout)
#endif

#if defined(__cplusplus) || defined(__STDC__)

#if defined(__cplusplus) && defined(__EXTERN_C__)
extern "C" {
#endif
	int yyback(int *, int);
	int yyinput(void);
	int yylook(void);
	void yyoutput(int);
	int yyracc(int);
	int yyreject(void);
	void yyunput(int);
	int yylex(void);
#ifdef YYLEX_E
	void yywoutput(wchar_t);
	wchar_t yywinput(void);
	void yywunput(wchar_t);
#endif
#ifndef yyless
	int yyless(int);
#endif
#ifndef yywrap
	int yywrap(void);
#endif
#ifdef LEXDEBUG
	void allprint(char);
	void sprint(char *);
#endif
#if defined(__cplusplus) && defined(__EXTERN_C__)
}
#endif

#ifdef __cplusplus
extern "C" {
#endif
	void exit(int);
#ifdef __cplusplus
}
#endif

#endif
# define unput(c) {yytchar= (c);if(yytchar=='\n')yylineno--;*yysptr++=yytchar;}
# define yymore() (yymorfg=1)
#ifndef __cplusplus
# define input() (((yytchar=yysptr>yysbuf?U(*--yysptr):getc(yyin))==10?(yylineno++,yytchar):yytchar)==EOF?0:yytchar)
#else
# define lex_input() (((yytchar=yysptr>yysbuf?U(*--yysptr):getc(yyin))==10?(yylineno++,yytchar):yytchar)==EOF?0:yytchar)
#endif
#define ECHO fprintf(yyout, "%s",yytext)
# define REJECT { nstr = yyreject(); goto yyfussy;}
int yyleng;
#define YYISARRAY
char yytext[YYLMAX];
int yymorfg;
extern char *yysptr, yysbuf[];
int yytchar;
FILE *yyin = {stdin}, *yyout = {stdout};
extern int yylineno;
struct yysvf { 
	struct yywork *yystoff;
	struct yysvf *yyother;
	int *yystops;};
struct yysvf *yyestate;
extern struct yysvf yysvec[], *yybgin;

# line 2 "scanner.specs"
/*
Edited by Ryo and Miki
*/

# line 8 "scanner.specs"
/*
%option lex-compat
%option noyywrap
 *	scanner.specs
 *      LKR 8/2015 comments edited
 */

#include "y.tab.h"

#include "../ctrl/ctrl.h"
#include "../symtab/symtab.h"

PLexToken lextok; //track the token being generated;
			//it can be used to guide what token follows

int epcMode; //global flag for imperative vs& declarative mode
int prev_token;

extern int yylval; //added from earlier
PSymtabEntry symtabEntry;
extern PSymtable symtable;
using namespace std;
# define YYNEWLINE 10
int yylex(){
int nstr; extern int yyprevious;
#ifdef __cplusplus
/* to avoid CC and lint complaining yyfussy not being used ...*/
static int __lex_hack = 0;
if (__lex_hack) goto yyfussy;
#endif
while((nstr = yylook()) >= 0)
yyfussy: switch(nstr){
case 0:
if(yywrap()) return(0); break;
case 1:

# line 44 "scanner.specs"
{ckout();
		}
break;
case 2:

# line 47 "scanner.specs"
{ckout();
                }
break;
case 3:

# line 50 "scanner.specs"
	{ckout();
		}
break;
case 4:

# line 53 "scanner.specs"
            {ckout();
                 lextok = new LexToken(yylineno, DOTDOTTK, yytext);
                 yylval = (long) lextok;
                 return prev_token=lextok->getToken();
                }
break;
case 5:

# line 59 "scanner.specs"
            {ckout();
                 lextok = new LexToken(yylineno, COMMATK, yytext);
                 yylval = (long) lextok;
                 return prev_token=lextok->getToken();
                }
break;
case 6:

# line 65 "scanner.specs"
	{ckout();
                 lextok = new LexToken(yylineno, LEFTBRACKETTK, yytext);
                 yylval = (long) lextok;
                 return prev_token=lextok->getToken();
                }
break;
case 7:

# line 71 "scanner.specs"
	{ckout();
                 lextok = new LexToken(yylineno, RIGHTBRACKETTK, yytext);
                 yylval = (long) lextok;
                 return prev_token=lextok->getToken();
                }
break;
case 8:

# line 77 "scanner.specs"
	{ckout();
		 lextok = new LexToken(yylineno, SCTK, yytext);
		 yylval = (long) lextok;
		 return prev_token=lextok->getToken();
		}
break;
case 9:

# line 82 "scanner.specs"
	{ckout();
		 lextok = new LexToken(yylineno, COLONTK, yytext);
		 yylval = (long) lextok;
		 return prev_token=lextok->getToken();
		}
break;
case 10:

# line 88 "scanner.specs"
	{ckout();
		 lextok =  new LexToken(yylineno, LPARENTK, yytext);
		 yylval = (long) lextok;
		 return prev_token=lextok->getToken();
		}
break;
case 11:

# line 94 "scanner.specs"
	{ckout();
		 lextok = new LexToken(yylineno, RPARENTK, yytext);
		 yylval = (long) lextok;
		 return prev_token=lextok->getToken();
		}
break;
case 12:

# line 100 "scanner.specs"
	{ckout();
		 lextok = new LexToken(yylineno, ASGTK, yytext);
		 yylval = (long) lextok;
		 return prev_token=lextok->getToken();
		}
break;
case 13:

# line 106 "scanner.specs"
	{ckout();
		 lextok = new LexToken(yylineno, DOTTK, yytext);
		 yylval = (long) lextok;
		 return prev_token=lextok->getToken();
		}
break;
case 14:

# line 112 "scanner.specs"
	{ckout();
		 lextok = new LexToken(yylineno, MULOPTK, yytext, 2);
		 yylval = (long) lextok;
		 return prev_token=lextok->getToken();
		}
break;
case 15:

# line 118 "scanner.specs"
            {ckout();
		 switch(prev_token){
			case CONTK:
				lextok = new LexToken(yylineno, ADDOPTK, yytext, 2);
				break;
			case IDTK:
				lextok = new LexToken(yylineno, ADDOPTK, yytext, 2);
				break;
			case RIGHTBRACKETTK:
				lextok = new LexToken(yylineno, ADDOPTK, yytext, 2);
				break;
			case RPARENTK:
				lextok = new LexToken(yylineno, ADDOPTK, yytext, 2);
				break;
			default:
				lextok = new LexToken(yylineno, UNARYTK, yytext, 2);
		}
                 yylval = (long) lextok;
                 return prev_token=lextok->getToken();
                }
break;
case 16:

# line 139 "scanner.specs"
            {ckout();
		 switch(prev_token){
			case CONTK:
                                lextok = new LexToken(yylineno, UNARYTK, yytext, 3);
				break;
                        case IDTK:
                                lextok = new LexToken(yylineno, ADDOPTK, yytext, 3);
                                break;
                        case RIGHTBRACKETTK:
                                lextok = new LexToken(yylineno, ADDOPTK, yytext, 3);
				break;
                        case RPARENTK:
                                lextok = new LexToken(yylineno, ADDOPTK, yytext, 3);
				break;
                        default:
                                lextok = new LexToken(yylineno, UNARYTK, yytext, 3);
		}
                 yylval = (long) lextok;
                 return prev_token=lextok->getToken();
                }
break;
case 17:

# line 160 "scanner.specs"
            {ckout();
                 lextok = new LexToken(yylineno, MULOPTK, yytext, 5);
                 yylval = (long) lextok;
                 return prev_token=lextok->getToken();
                }
break;
case 18:

# line 166 "scanner.specs"
            {ckout();
                 lextok = new LexToken(yylineno, RELOPTK, yytext, 1);
                 yylval = (long) lextok;
                 return prev_token=lextok->getToken();
                }
break;
case 19:

# line 172 "scanner.specs"
            {ckout();
                 lextok = new LexToken(yylineno, RELOPTK, yytext, 2);
                 yylval = (long) lextok;
                 return prev_token=lextok->getToken();
                }
break;
case 20:

# line 178 "scanner.specs"
            {ckout();
                 lextok = new LexToken(yylineno, RELOPTK, yytext, 3);
                 yylval = (long) lextok;
                 return prev_token=lextok->getToken();
                }
break;
case 21:

# line 184 "scanner.specs"
            {ckout();
                 lextok = new LexToken(yylineno, RELOPTK, yytext, 4);
                 yylval = (long) lextok;
                 return prev_token=lextok->getToken();
                }
break;
case 22:

# line 190 "scanner.specs"
            {ckout();
                 lextok = new LexToken(yylineno, RELOPTK, yytext, 5);
                 yylval = (long) lextok;
                 return prev_token=lextok->getToken();
                }
break;
case 23:

# line 196 "scanner.specs"
            {ckout();
                 lextok = new LexToken(yylineno, RELOPTK, yytext, 6);
                 yylval = (long) lextok;
                 return prev_token=lextok->getToken();
                }
break;
case 24:

# line 202 "scanner.specs"
   	{ckout();
                   //this only handles integers at the moment
		   //the regex needs to handle fractions and exponents
		   int contype = REAL;
		   if(strchr(yytext,'.')==NULL)contype=INTEGER;
	     	 lextok = new LexToken(yylineno, CONTK, yytext, contype);

		 yylval = (long) lextok;
		 return prev_token=lextok->getToken();
	    	}
break;
case 25:

# line 213 "scanner.specs"
{
	ckout();
	// need code to change yytext to lower case
	char *c = yytext;
	while (*c)
	{
		*c++ = tolower(*c);
	}
	// check if string yytext is a reserved word instead.
	int actual_token = ck_reserved_wd();

	if (actual_token == IDTK)
	{ //--programmer identifier
		// is already in symbol table?
		symtabEntry = symtable->lookup(yytext);
		// add if not
		if (symtabEntry == 0)
		{
			/* verify that epcMode is declarative (else error)*/
			if(epcMode != 1){
				throw "epcMode isn't in declarative";
			}
			symtabEntry = new SymtabEntry(yytext);
			symtable->insert(symtabEntry);
		}
		else
		{
			/* it's there and so verify that in imperative mode
			 otherwise error*/
			if(epcMode != 0){
				throw "epcMode isn't in imperative";
			}
		}
		// so yylval is the address of symbol table entry of id
		lextok = new LexToken(yylineno, actual_token, yytext,
							  (long)symtabEntry);
	}
	else
	{
		// check if PROGRAMTK PROCEDURETK or FUNCTIONTK
		// and set epcMode to true(1) as declarative
		//
		// else check if BEGINTK and
		// set epcMode to false(0) as imperative
		switch(actual_token){
			case PROGRAMTK:
			case PROCEDURETK:
			case FUNCTIONTK:
				epcMode = 1;
			break;
			case BEGINTK:
				epcMode = 0;
			break;
		}

		//  handle reserved word and specific yylval of reserved word
		lextok = new LexToken(yylineno, actual_token, yytext, yylval);
	}

	yylval = (long)symtabEntry; // this is different!
	return prev_token = lextok->getToken();
}
break;
case 26:

# line 276 "scanner.specs"
    {ckout();
	     //this should not really be tapped nor return anything 
	     lextok = new LexToken(yylineno, yytext[0], yytext);
	     //return yytext[0];
	    }
break;
case -1:
break;
default:
(void)fprintf(yyout,"bad switch yylook %d",nstr);
} return(0); }
/* end of yylex */

# line 283 "scanner.specs"

#include <string.h>
char *textline = new char[257];

void ckout() {
   textline = strcat(textline,yytext); //essentially copy tokens to output line
   if (yytext[0] == '\n') {
	   // trace source line if option chosen
       if (Options::flags('l')) {  //Line list option is an l
  	   cout << "//====LINE[";
	   cout.width(5);
	   cout <<  yylineno -1 << "]    " << textline ;
       }
       textline[0] = '\0';
   }
}

struct rwtable_str {
    const char *rw_name;	/* lexeme */
    int  rw_yylex;	/* token code ...TK */
    int  rw_yylval;     /* yylval subcode */
};

/*KEYWORDS (first column) MUST BE SORTED IN ALPHABETICAL ORDER*/
rwtable_str rwtable[] = {
 // lowercase keyword | parser constant|subcode
    "",                 IDTK,           0,
    "and",              MULOPTK,        1,
    "array",            ARRAYTK,        0,
    "begin",            BEGINTK,        0,
    "char",             STDTYPETK,      3,
    "div",              MULOPTK,        4,
    "do",               DOTK,           0,
    "else",             ELSETK,         0,
    "end",              ENDTK,          0,
    "function",         FUNCTIONTK,     0,
    "if",               IFTK,           0,
    "integer",          STDTYPETK,      1,
    "mod",              MULOPTK,        3,
    "not",              UNARYTK,        1,
    "of",               OFTK,           0,
    "or",               ADDOPTK,        1,
    "procedure",        PROCEDURETK,    0,
    "program",          PROGRAMTK,      0,
    "read",             READTK,         0,
    "readln",           READLNTK,       0,
    "real",             STDTYPETK,      2,
    "return",           RETURNTK,       0,
    "string",           STDTYPETK,      4,
    "then",             THENTK,         0,
    "var",              VARTK,          0,
    "while",            WHILETK,        0,
    "write",            WRITETK,        0,
    "writeln",          WRITELNTK,      0
};

#define LEN(x) 		(sizeof(x)/sizeof((x)[0]))
#define ENDTABLE(v)	(v - 1 + LEN(v))

int ck_reserved_wd() {
	rwtable_str	*low = rwtable;
	rwtable_str	*high = ENDTABLE(rwtable);
	rwtable_str	*mid;
	int comp;
	char temp[80];

	strcpy(temp,yytext);

	   //binary search assuming sorted keywords
	while (low <= high)
	{	mid = low + (high-low)/2;

		if ((comp=strcmp(mid->rw_name, yytext)) == 0){
			yylval = mid->rw_yylval;
			return mid->rw_yylex; /*found reserved word*/
		}
		else if (comp < 0)
			low = mid+1;
		else
			high = mid-1;
	}
	    // if we get here, it's not a keyword
	yylval = 0;
	return rwtable->rw_yylex;  // token: IDTK returned but could be PIDTK
}
int yywrap(){return(1);}
int yyvstop[] = {
0,

26,
0, 

1,
26,
0, 

3,
0, 

10,
26,
0, 

11,
26,
0, 

14,
26,
0, 

15,
26,
0, 

5,
26,
0, 

16,
26,
0, 

13,
26,
0, 

17,
26,
0, 

24,
26,
0, 

9,
26,
0, 

8,
26,
0, 

19,
26,
0, 

18,
26,
0, 

20,
26,
0, 

25,
26,
0, 

6,
26,
0, 

7,
26,
0, 

26,
0, 

4,
0, 

24,
0, 

12,
0, 

21,
0, 

23,
0, 

22,
0, 

25,
0, 

2,
0, 

24,
0, 

24,
0, 
0};
# define YYTYPE unsigned char
struct yywork { YYTYPE verify, advance; } yycrank[] = {
0,0,	0,0,	1,3,	0,0,	
0,0,	23,33,	0,0,	0,0,	
0,0,	0,0,	1,4,	1,5,	
0,0,	23,33,	23,33,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	1,6,	1,7,	1,8,	
1,9,	1,10,	1,11,	1,12,	
1,13,	1,14,	12,24,	0,0,	
23,33,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	1,15,	
1,16,	1,17,	1,18,	1,19,	
15,28,	19,31,	1,20,	17,29,	
17,30,	23,33,	1,20,	0,0,	
0,0,	23,33,	0,0,	0,0,	
0,0,	2,6,	2,7,	2,8,	
2,9,	2,10,	2,11,	2,12,	
2,13,	0,0,	0,0,	0,0,	
0,0,	0,0,	35,27,	0,0,	
1,21,	0,0,	1,22,	2,15,	
2,16,	2,17,	2,18,	2,19,	
14,25,	0,0,	14,26,	14,26,	
14,26,	14,26,	14,26,	14,26,	
14,26,	14,26,	14,26,	14,26,	
25,35,	25,35,	25,35,	25,35,	
25,35,	25,35,	25,35,	25,35,	
25,35,	25,35,	35,27,	14,27,	
1,23,	0,0,	1,3,	0,0,	
2,21,	23,34,	2,22,	36,37,	
36,37,	36,37,	36,37,	36,37,	
36,37,	36,37,	36,37,	36,37,	
36,37,	0,0,	0,0,	0,0,	
20,32,	20,32,	20,32,	20,32,	
20,32,	20,32,	20,32,	20,32,	
20,32,	20,32,	0,0,	14,27,	
0,0,	0,0,	0,0,	0,0,	
2,23,	20,32,	20,32,	20,32,	
20,32,	20,32,	20,32,	20,32,	
20,32,	20,32,	20,32,	20,32,	
20,32,	20,32,	20,32,	20,32,	
20,32,	20,32,	20,32,	20,32,	
20,32,	20,32,	20,32,	20,32,	
20,32,	20,32,	20,32,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	20,32,	20,32,	20,32,	
20,32,	20,32,	20,32,	20,32,	
20,32,	20,32,	20,32,	20,32,	
20,32,	20,32,	20,32,	20,32,	
20,32,	20,32,	20,32,	20,32,	
20,32,	20,32,	20,32,	20,32,	
20,32,	20,32,	20,32,	27,36,	
0,0,	27,36,	0,0,	0,0,	
27,37,	27,37,	27,37,	27,37,	
27,37,	27,37,	27,37,	27,37,	
27,37,	27,37,	0,0,	0,0,	
0,0};
struct yysvf yysvec[] = {
0,	0,	0,
yycrank+-1,	0,		0,	
yycrank+-37,	yysvec+1,	0,	
yycrank+0,	0,		yyvstop+1,
yycrank+0,	0,		yyvstop+3,
yycrank+0,	0,		yyvstop+6,
yycrank+0,	0,		yyvstop+8,
yycrank+0,	0,		yyvstop+11,
yycrank+0,	0,		yyvstop+14,
yycrank+0,	0,		yyvstop+17,
yycrank+0,	0,		yyvstop+20,
yycrank+0,	0,		yyvstop+23,
yycrank+4,	0,		yyvstop+26,
yycrank+0,	0,		yyvstop+29,
yycrank+54,	0,		yyvstop+32,
yycrank+3,	0,		yyvstop+35,
yycrank+0,	0,		yyvstop+38,
yycrank+6,	0,		yyvstop+41,
yycrank+0,	0,		yyvstop+44,
yycrank+4,	0,		yyvstop+47,
yycrank+96,	0,		yyvstop+50,
yycrank+0,	0,		yyvstop+53,
yycrank+0,	0,		yyvstop+56,
yycrank+-4,	0,		yyvstop+59,
yycrank+0,	0,		yyvstop+61,
yycrank+64,	0,		0,	
yycrank+0,	yysvec+14,	yyvstop+63,
yycrank+176,	0,		0,	
yycrank+0,	0,		yyvstop+65,
yycrank+0,	0,		yyvstop+67,
yycrank+0,	0,		yyvstop+69,
yycrank+0,	0,		yyvstop+71,
yycrank+0,	yysvec+20,	yyvstop+73,
yycrank+0,	yysvec+23,	0,	
yycrank+0,	0,		yyvstop+75,
yycrank+21,	yysvec+25,	yyvstop+77,
yycrank+83,	0,		0,	
yycrank+0,	yysvec+36,	yyvstop+79,
0,	0,	0};
struct yywork *yytop = yycrank+233;
struct yysvf *yybgin = yysvec+1;
char yymatch[] = {
  0,   1,   1,   1,   1,   1,   1,   1, 
  1,   9,  10,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
  9,   1,   1,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
 48,  48,  48,  48,  48,  48,  48,  48, 
 48,  48,   1,   1,   1,   1,   1,   1, 
  1,  65,  65,  65,  65,  69,  65,  65, 
 65,  65,  65,  65,  65,  65,  65,  65, 
 65,  65,  65,  65,  65,  65,  65,  65, 
 65,  65,  65,   1,   1,   1,   1,   1, 
  1,  65,  65,  65,  65,  69,  65,  65, 
 65,  65,  65,  65,  65,  65,  65,  65, 
 65,  65,  65,  65,  65,  65,  65,  65, 
 65,  65,  65,   1,   1, 125,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
0};
char yyextra[] = {
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,
0};
/*	Copyright (c) 1989 AT&T	*/
/*	  All Rights Reserved  	*/

int yylineno =1;
# define YYU(x) x
# define NLSTATE yyprevious=YYNEWLINE
struct yysvf *yylstate [YYLMAX], **yylsp, **yyolsp;
char yysbuf[YYLMAX];
char *yysptr = yysbuf;
int *yyfnd;
extern struct yysvf *yyestate;
int yyprevious = YYNEWLINE;
#if defined(__cplusplus) || defined(__STDC__)
int yylook(void)
#else
yylook()
#endif
{
	register struct yysvf *yystate, **lsp;
	register struct yywork *yyt;
	struct yysvf *yyz;
	int yych, yyfirst;
	struct yywork *yyr;
# ifdef LEXDEBUG
	int debug;
# endif
	char *yylastch;
	/* start off machines */
# ifdef LEXDEBUG
	debug = 0;
# endif
	yyfirst=1;
	if (!yymorfg)
		yylastch = yytext;
	else {
		yymorfg=0;
		yylastch = yytext+yyleng;
		}
	for(;;){
		lsp = yylstate;
		yyestate = yystate = yybgin;
		if (yyprevious==YYNEWLINE) yystate++;
		for (;;){
# ifdef LEXDEBUG
			if(debug)fprintf(yyout,"state %d\n",yystate-yysvec-1);
# endif
			yyt = yystate->yystoff;
			if(yyt == yycrank && !yyfirst){  /* may not be any transitions */
				yyz = yystate->yyother;
				if(yyz == 0)break;
				if(yyz->yystoff == yycrank)break;
				}
#ifndef __cplusplus
			*yylastch++ = yych = input();
#else
			*yylastch++ = yych = lex_input();
#endif
#ifdef YYISARRAY
			if(yylastch > &yytext[YYLMAX]) {
				fprintf(yyout,"Input string too long, limit %d\n",YYLMAX);
				exit(1);
			}
#else
			if (yylastch >= &yytext[ yytextsz ]) {
				int	x = yylastch - yytext;

				yytextsz += YYTEXTSZINC;
				if (yytext == yy_tbuf) {
				    yytext = (char *) malloc(yytextsz);
				    memcpy(yytext, yy_tbuf, sizeof (yy_tbuf));
				}
				else
				    yytext = (char *) realloc(yytext, yytextsz);
				if (!yytext) {
				    fprintf(yyout,
					"Cannot realloc yytext\n");
				    exit(1);
				}
				yylastch = yytext + x;
			}
#endif
			yyfirst=0;
		tryagain:
# ifdef LEXDEBUG
			if(debug){
				fprintf(yyout,"char ");
				allprint(yych);
				putchar('\n');
				}
# endif
			yyr = yyt;
			if ( (uintptr_t)yyt > (uintptr_t)yycrank){
				yyt = yyr + yych;
				if (yyt <= yytop && yyt->verify+yysvec == yystate){
					if(yyt->advance+yysvec == YYLERR)	/* error transitions */
						{unput(*--yylastch);break;}
					*lsp++ = yystate = yyt->advance+yysvec;
					if(lsp > &yylstate[YYLMAX]) {
						fprintf(yyout,"Input string too long, limit %d\n",YYLMAX);
						exit(1);
					}
					goto contin;
					}
				}
# ifdef YYOPTIM
			else if((uintptr_t)yyt < (uintptr_t)yycrank) {	/* r < yycrank */
				yyt = yyr = yycrank+(yycrank-yyt);
# ifdef LEXDEBUG
				if(debug)fprintf(yyout,"compressed state\n");
# endif
				yyt = yyt + yych;
				if(yyt <= yytop && yyt->verify+yysvec == yystate){
					if(yyt->advance+yysvec == YYLERR)	/* error transitions */
						{unput(*--yylastch);break;}
					*lsp++ = yystate = yyt->advance+yysvec;
					if(lsp > &yylstate[YYLMAX]) {
						fprintf(yyout,"Input string too long, limit %d\n",YYLMAX);
						exit(1);
					}
					goto contin;
					}
				yyt = yyr + YYU(yymatch[yych]);
# ifdef LEXDEBUG
				if(debug){
					fprintf(yyout,"try fall back character ");
					allprint(YYU(yymatch[yych]));
					putchar('\n');
					}
# endif
				if(yyt <= yytop && yyt->verify+yysvec == yystate){
					if(yyt->advance+yysvec == YYLERR)	/* error transition */
						{unput(*--yylastch);break;}
					*lsp++ = yystate = yyt->advance+yysvec;
					if(lsp > &yylstate[YYLMAX]) {
						fprintf(yyout,"Input string too long, limit %d\n",YYLMAX);
						exit(1);
					}
					goto contin;
					}
				}
			if ((yystate = yystate->yyother) && (yyt= yystate->yystoff) != yycrank){
# ifdef LEXDEBUG
				if(debug)fprintf(yyout,"fall back to state %d\n",yystate-yysvec-1);
# endif
				goto tryagain;
				}
# endif
			else
				{unput(*--yylastch);break;}
		contin:
# ifdef LEXDEBUG
			if(debug){
				fprintf(yyout,"state %d char ",yystate-yysvec-1);
				allprint(yych);
				putchar('\n');
				}
# endif
			;
			}
# ifdef LEXDEBUG
		if(debug){
			fprintf(yyout,"stopped at %d with ",*(lsp-1)-yysvec-1);
			allprint(yych);
			putchar('\n');
			}
# endif
		while (lsp-- > yylstate){
			*yylastch-- = 0;
			if (*lsp != 0 && (yyfnd= (*lsp)->yystops) && *yyfnd > 0){
				yyolsp = lsp;
				if(yyextra[*yyfnd]){		/* must backup */
					while(yyback((*lsp)->yystops,-*yyfnd) != 1 && lsp > yylstate){
						lsp--;
						unput(*yylastch--);
						}
					}
				yyprevious = YYU(*yylastch);
				yylsp = lsp;
				yyleng = yylastch-yytext+1;
				yytext[yyleng] = 0;
# ifdef LEXDEBUG
				if(debug){
					fprintf(yyout,"\nmatch ");
					sprint(yytext);
					fprintf(yyout," action %d\n",*yyfnd);
					}
# endif
				return(*yyfnd++);
				}
			unput(*yylastch);
			}
		if (yytext[0] == 0  /* && feof(yyin) */)
			{
			yysptr=yysbuf;
			return(0);
			}
#ifndef __cplusplus
		yyprevious = yytext[0] = input();
		if (yyprevious>0)
			output(yyprevious);
#else
		yyprevious = yytext[0] = lex_input();
		if (yyprevious>0)
			lex_output(yyprevious);
#endif
		yylastch=yytext;
# ifdef LEXDEBUG
		if(debug)putchar('\n');
# endif
		}
	}
#if defined(__cplusplus) || defined(__STDC__)
int yyback(int *p, int m)
#else
yyback(p, m)
	int *p;
#endif
{
	if (p==0) return(0);
	while (*p) {
		if (*p++ == m)
			return(1);
	}
	return(0);
}
	/* the following are only used in the lex library */
#if defined(__cplusplus) || defined(__STDC__)
int yyinput(void)
#else
yyinput()
#endif
{
#ifndef __cplusplus
	return(input());
#else
	return(lex_input());
#endif
	}
#if defined(__cplusplus) || defined(__STDC__)
void yyoutput(int c)
#else
yyoutput(c)
  int c; 
#endif
{
#ifndef __cplusplus
	output(c);
#else
	lex_output(c);
#endif
	}
#if defined(__cplusplus) || defined(__STDC__)
void yyunput(int c)
#else
yyunput(c)
   int c; 
#endif
{
	unput(c);
	}
