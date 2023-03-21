
# line 4 "parser.gram"
/*
 *	parser.gram
 *      LKR 8/2015 comments edited
 */

/*
#define YYSTYPE PPTreeNodeCls
*/

using namespace std;
void printReduce(char *);
extern char* textline; //Defined in scanner.specs
extern int epcMode; //switch between imperative&declarative
extern PSymtable symtable;
//typedef SymtabEntry class * PSymtabEntry;

//The token object has these getters.  lextok is defined.
//PLexToken lextok;
//   char * lextok->getLexeme();
//   int lextok->getLineNo();
//   int lextok->getToken();
//   int lextok->getSubcode();
# define PROGRAMTK 257
# define BEGINTK 258
# define ENDTK 259
# define VARTK 260
# define SCTK 261
# define COLONTK 262
# define ASGTK 263
# define DOTTK 264
# define IDTK 265
# define CONTK 266
# define LPARENTK 267
# define RPARENTK 268
# define WRITETK 269
# define WRITELNTK 270
# define MULOPTK 271
# define ADDOPTK 272
# define ELSETK 273
# define IFTK 274
# define THENTK 275
# define STDTYPETK 276
# define COMMATK 277
# define RETURNTK 278
# define FUNCTIONTK 279
# define PROCEDURETK 280
# define WHILETK 281
# define ARRAYTK 282
# define OFTK 283
# define DOTK 284
# define READTK 285
# define READLNTK 286
# define RELOPTK 287
# define UNARYTK 288
# define LEFTBRACKETTK 289
# define RIGHTBRACKETTK 290
# define DOTDOTTK 291

#include <inttypes.h>

#ifdef __STDC__
#include <stdlib.h>
#include <string.h>
#define	YYCONST	const
#else
#include <malloc.h>
#include <memory.h>
#define	YYCONST
#endif

#include <values.h>

#if defined(__cplusplus) || defined(__STDC__)

#if defined(__cplusplus) && defined(__EXTERN_C__)
extern "C" {
#endif
#ifndef yyerror
#if defined(__cplusplus)
	void yyerror(YYCONST char *);
#endif
#endif
#ifndef yylex
	int yylex(void);
#endif
	int yyparse(void);
#if defined(__cplusplus) && defined(__EXTERN_C__)
}
#endif

#endif

#define yyclearin yychar = -1
#define yyerrok yyerrflag = 0
extern int yychar;
extern int yyerrflag;
#ifndef YYSTYPE
#define YYSTYPE int
#endif
YYSTYPE yylval;
YYSTYPE yyval;
typedef int yytabelem;
#ifndef YYMAXDEPTH
#define YYMAXDEPTH 150
#endif
#if YYMAXDEPTH > 0
int yy_yys[YYMAXDEPTH], *yys = yy_yys;
YYSTYPE yy_yyv[YYMAXDEPTH], *yyv = yy_yyv;
#else	/* user does initial allocation */
int *yys;
YYSTYPE *yyv;
#endif
static int yymaxdepth = YYMAXDEPTH;
# define YYERRCODE 256

# line 352 "parser.gram"

void printReduce(const char * reduction){
    if(Options::flags('r')){
	cout << "//----Reduce: "<<reduction<<endl;
    }
}
static YYCONST yytabelem yyexca[] ={
-1, 1,
	0, -1,
	-2, 0,
	};
# define YYNPROD 59
# define YYLAST 216
static YYCONST yytabelem yyact[]={

    10,    35,    51,    52,    91,   119,   122,    35,   111,    61,
    98,    33,    34,    35,    51,    52,    25,    62,    75,    79,
    28,   123,    73,    26,    48,   124,   116,    31,    32,    35,
    51,    52,    89,    74,    68,    10,    48,     8,   112,    61,
    70,    13,    14,   113,    20,    76,   110,   109,   103,    41,
   121,   108,    48,   107,   105,   109,    13,    14,    13,    14,
   109,    65,   106,   106,    42,    20,    60,   115,   114,    35,
    51,    52,    20,    83,    83,    96,    85,    59,    58,    57,
    71,    38,    37,    20,     3,    15,    55,    94,    43,    97,
    44,    93,    36,     4,    10,     2,    50,    53,    23,    18,
    87,    17,    49,    86,    81,    11,     9,    27,    29,    47,
    64,    30,    46,     5,    24,    21,     7,    40,    16,    22,
    12,    69,    67,    19,    39,     6,    45,    54,     1,    56,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    27,    29,    72,     0,    21,     0,     0,     7,    66,
    63,     0,     0,    78,    82,    82,    80,     0,    77,     0,
     0,     0,    90,    84,    88,     0,    92,    95,     0,     0,
    27,    29,    99,     0,     0,   100,    27,    29,   104,   102,
     0,     0,     0,     0,     0,   101,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    40,     0,     0,     0,     0,
     0,     0,     0,   117,     0,     0,     0,     0,     0,     0,
   118,     0,     0,    27,    29,   120 };
static YYCONST yytabelem yypact[]={

  -162,-10000000,  -181,  -168,  -223,  -179,  -164,-10000000,  -182,  -238,
  -258,-10000000,  -169,  -183,  -184,-10000000,-10000000,  -221,-10000000,  -213,
-10000000,-10000000,  -171,-10000000,-10000000,  -252,  -252,  -177,  -252,-10000000,
-10000000,  -188,  -189,  -190,  -201,  -250,  -223,  -206,  -206,  -238,
-10000000,  -242,  -185,-10000000,  -258,  -253,  -254,  -226,  -196,-10000000,
-10000000,-10000000,  -252,-10000000,  -265,  -252,-10000000,  -191,  -192,  -252,
  -236,  -252,  -264,  -170,  -175,  -193,-10000000,  -172,-10000000,-10000000,
  -279,-10000000,-10000000,  -258,  -252,  -196,  -196,  -226,  -220,  -258,
-10000000,  -214,-10000000,  -280,  -215,-10000000,  -217,-10000000,  -222,-10000000,
  -282,-10000000,  -230,-10000000,  -233,  -200,-10000000,-10000000,  -199,  -247,
-10000000,  -226,-10000000,-10000000,-10000000,-10000000,  -191,-10000000,-10000000,  -252,
-10000000,-10000000,-10000000,-10000000,-10000000,  -286,  -258,-10000000,-10000000,  -216,
-10000000,  -284,  -262,  -251,-10000000 };
static YYCONST yytabelem yypgo[]={

     0,   128,   113,   125,   111,   101,   106,    99,   123,   122,
   121,   105,   120,   110,   119,    98,   114,   100,    96,    97,
   104,   103,   112,   109,   102 };
static YYCONST yytabelem yyr1[]={

     0,     1,     2,     2,     3,     3,     3,     5,     5,     7,
     8,     8,     9,     9,    10,     6,     6,    11,    12,    12,
    13,    13,     4,    14,    14,    15,    15,    15,    15,    16,
    16,    16,    16,    16,    16,    16,    16,    16,    16,    16,
    18,    18,    20,    20,    19,    19,    21,    21,    17,    17,
    22,    22,    22,    23,    23,    24,    24,    24,    24 };
static YYCONST yytabelem yyr2[]={

     0,    11,     5,     3,     5,     3,     7,     3,     5,     9,
     3,     7,     3,     3,    17,     3,     5,     9,    11,     7,
     7,     5,     7,     3,     7,     3,    13,     9,     9,     7,
     5,     3,     3,     3,     9,     9,     7,     9,     9,     7,
     3,     9,     3,     7,     7,     9,     3,     7,     3,     7,
     3,     5,     7,     3,     7,     3,     3,     7,     3 };
static YYCONST yytabelem yychk[]={

-10000000,    -1,   257,   265,   261,    -2,    -3,    -4,   260,    -6,
   258,   -11,   -12,   279,   280,   264,    -4,    -5,    -7,    -8,
   265,   -11,   -14,   -15,   -16,   274,   281,   -18,   278,   -19,
    -4,   285,   286,   269,   270,   265,   261,   265,   265,    -6,
    -7,   262,   277,   259,   261,   -17,   -22,   -23,   288,   -24,
   -18,   266,   267,   -19,   -17,   263,   -17,   267,   267,   267,
   267,   289,   267,    -2,   -13,   267,   -13,    -9,   276,   -10,
   282,   265,   -15,   275,   287,   272,   271,   -23,   -17,   284,
   -17,   -20,   -18,   265,   -20,   268,   -21,   -17,   -21,   268,
   -17,   268,   -21,   261,   262,    -5,   268,   261,   289,   -15,
   -17,   -23,   -24,   268,   -15,   268,   277,   268,   268,   277,
   268,   290,   268,   276,   268,   266,   273,   -18,   -17,   291,
   -15,   266,   290,   283,   276 };
static YYCONST yytabelem yydef[]={

     0,    -2,     0,     0,     0,     0,     0,     3,     0,     5,
     0,    15,     0,     0,     0,     1,     2,     4,     7,     0,
    10,    16,     0,    23,    25,     0,     0,     0,    31,    32,
    33,     0,     0,     0,     0,    40,     0,     0,     0,     6,
     8,     0,     0,    22,     0,     0,    48,    50,     0,    53,
    55,    56,     0,    58,     0,     0,    30,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    19,     0,    12,    13,
     0,    11,    24,     0,     0,     0,     0,    51,     0,     0,
    29,     0,    42,    40,     0,    36,     0,    46,     0,    39,
     0,    44,     0,    17,     0,     0,    21,     9,     0,    27,
    49,    52,    54,    57,    28,    34,     0,    35,    37,     0,
    38,    41,    45,    18,    20,     0,     0,    43,    47,     0,
    26,     0,     0,     0,    14 };
typedef struct
#ifdef __cplusplus
	yytoktype
#endif
{
#ifdef __cplusplus
const
#endif
char *t_name; int t_val; } yytoktype;
#ifndef YYDEBUG
#	define YYDEBUG	0	/* don't allow debugging */
#endif

#if YYDEBUG

yytoktype yytoks[] =
{
	"PROGRAMTK",	257,
	"BEGINTK",	258,
	"ENDTK",	259,
	"VARTK",	260,
	"SCTK",	261,
	"COLONTK",	262,
	"ASGTK",	263,
	"DOTTK",	264,
	"IDTK",	265,
	"CONTK",	266,
	"LPARENTK",	267,
	"RPARENTK",	268,
	"WRITETK",	269,
	"WRITELNTK",	270,
	"MULOPTK",	271,
	"ADDOPTK",	272,
	"ELSETK",	273,
	"IFTK",	274,
	"THENTK",	275,
	"STDTYPETK",	276,
	"COMMATK",	277,
	"RETURNTK",	278,
	"FUNCTIONTK",	279,
	"PROCEDURETK",	280,
	"WHILETK",	281,
	"ARRAYTK",	282,
	"OFTK",	283,
	"DOTK",	284,
	"READTK",	285,
	"READLNTK",	286,
	"RELOPTK",	287,
	"UNARYTK",	288,
	"LEFTBRACKETTK",	289,
	"RIGHTBRACKETTK",	290,
	"DOTDOTTK",	291,
	"-unknown-",	-1	/* ends search */
};

#ifdef __cplusplus
const
#endif
char * yyreds[] =
{
	"-no such reduction-",
	"pgm : PROGRAMTK IDTK SCTK body DOTTK",
	"body : dclpart compstmt",
	"body : compstmt",
	"dclpart : VARTK dcls",
	"dclpart : subdcls",
	"dclpart : VARTK dcls subdcls",
	"dcls : dcl",
	"dcls : dcls dcl",
	"dcl : idlist COLONTK type SCTK",
	"idlist : IDTK",
	"idlist : idlist COMMATK IDTK",
	"type : STDTYPETK",
	"type : arraytype",
	"arraytype : ARRAYTK LEFTBRACKETTK CONTK DOTDOTTK CONTK RIGHTBRACKETTK OFTK STDTYPETK",
	"subdcls : subdcl",
	"subdcls : subdcls subdcl",
	"subdcl : subhead SCTK body SCTK",
	"subhead : FUNCTIONTK IDTK args COLONTK STDTYPETK",
	"subhead : PROCEDURETK IDTK args",
	"args : LPARENTK dcls RPARENTK",
	"args : LPARENTK RPARENTK",
	"compstmt : BEGINTK stmts ENDTK",
	"stmts : stmt",
	"stmts : stmts SCTK stmt",
	"stmt : elstmt",
	"stmt : IFTK expr THENTK stmt ELSETK stmt",
	"stmt : IFTK expr THENTK stmt",
	"stmt : WHILETK expr DOTK stmt",
	"elstmt : vbl ASGTK expr",
	"elstmt : RETURNTK expr",
	"elstmt : RETURNTK",
	"elstmt : procfunc",
	"elstmt : compstmt",
	"elstmt : READTK LPARENTK vbllist RPARENTK",
	"elstmt : READLNTK LPARENTK vbllist RPARENTK",
	"elstmt : READLNTK LPARENTK RPARENTK",
	"elstmt : WRITETK LPARENTK exprlist RPARENTK",
	"elstmt : WRITELNTK LPARENTK exprlist RPARENTK",
	"elstmt : WRITELNTK LPARENTK RPARENTK",
	"vbl : IDTK",
	"vbl : IDTK LEFTBRACKETTK expr RIGHTBRACKETTK",
	"vbllist : vbl",
	"vbllist : vbllist COMMATK vbl",
	"procfunc : IDTK LPARENTK RPARENTK",
	"procfunc : IDTK LPARENTK exprlist RPARENTK",
	"exprlist : expr",
	"exprlist : exprlist COMMATK expr",
	"expr : simexp",
	"expr : simexp RELOPTK expr",
	"simexp : term",
	"simexp : UNARYTK term",
	"simexp : simexp ADDOPTK term",
	"term : factor",
	"term : term MULOPTK factor",
	"factor : vbl",
	"factor : CONTK",
	"factor : LPARENTK expr RPARENTK",
	"factor : procfunc",
};
#endif /* YYDEBUG */
# line	1 "/usr/share/lib/ccs/yaccpar"
/*
 * Copyright (c) 1989, 1993, Oracle and/or its affiliates. All rights reserved.
 */

/* Copyright (c) 1988 AT&T */
/* All Rights Reserved */

/*
** Skeleton parser driver for yacc output
*/

/*
** yacc user known macros and defines
*/
#define YYERROR		goto yyerrlab
#define YYACCEPT	return(0)
#define YYABORT		return(1)
#define YYBACKUP( newtoken, newvalue )\
{\
	if ( yychar >= 0 || ( yyr2[ yytmp ] >> 1 ) != 1 )\
	{\
		yyerror( "syntax error - cannot backup" );\
		goto yyerrlab;\
	}\
	yychar = newtoken;\
	yystate = *yyps;\
	yylval = newvalue;\
	goto yynewstate;\
}
#define YYRECOVERING()	(!!yyerrflag)
#define YYNEW(type)	malloc(sizeof(type) * yynewmax)
#define YYCOPY(to, from, type) \
	(type *) memcpy(to, (char *) from, yymaxdepth * sizeof (type))
#define YYENLARGE( from, type) \
	(type *) realloc((char *) from, yynewmax * sizeof(type))
#ifndef YYDEBUG
#	define YYDEBUG	1	/* make debugging available */
#endif

/*
** user known globals
*/
int yydebug;			/* set to 1 to get debugging */

/*
** driver internal defines
*/
#define YYFLAG		(-10000000)

/*
** global variables used by the parser
*/
YYSTYPE *yypv;			/* top of value stack */
int *yyps;			/* top of state stack */

int yystate;			/* current state */
int yytmp;			/* extra var (lasts between blocks) */

int yynerrs;			/* number of errors */
int yyerrflag;			/* error recovery flag */
int yychar;			/* current input token number */



#ifdef YYNMBCHARS
#define YYLEX()		yycvtok(yylex())
/*
** yycvtok - return a token if i is a wchar_t value that exceeds 255.
**	If i<255, i itself is the token.  If i>255 but the neither 
**	of the 30th or 31st bit is on, i is already a token.
*/
#if defined(__STDC__) || defined(__cplusplus)
int yycvtok(int i)
#else
int yycvtok(i) int i;
#endif
{
	int first = 0;
	int last = YYNMBCHARS - 1;
	int mid;
	wchar_t j;

	if(i&0x60000000){/*Must convert to a token. */
		if( yymbchars[last].character < i ){
			return i;/*Giving up*/
		}
		while ((last>=first)&&(first>=0)) {/*Binary search loop*/
			mid = (first+last)/2;
			j = yymbchars[mid].character;
			if( j==i ){/*Found*/ 
				return yymbchars[mid].tvalue;
			}else if( j<i ){
				first = mid + 1;
			}else{
				last = mid -1;
			}
		}
		/*No entry in the table.*/
		return i;/* Giving up.*/
	}else{/* i is already a token. */
		return i;
	}
}
#else/*!YYNMBCHARS*/
#define YYLEX()		yylex()
#endif/*!YYNMBCHARS*/

/*
** yyparse - return 0 if worked, 1 if syntax error not recovered from
*/
#if defined(__STDC__) || defined(__cplusplus)
int yyparse(void)
#else
int yyparse()
#endif
{
	register YYSTYPE *yypvt = 0;	/* top of value stack for $vars */

#if defined(__cplusplus) || defined(lint)
/*
	hacks to please C++ and lint - goto's inside
	switch should never be executed
*/
	static int __yaccpar_lint_hack__ = 0;
	switch (__yaccpar_lint_hack__)
	{
		case 1: goto yyerrlab;
		case 2: goto yynewstate;
	}
#endif

	/*
	** Initialize externals - yyparse may be called more than once
	*/
	yypv = &yyv[-1];
	yyps = &yys[-1];
	yystate = 0;
	yytmp = 0;
	yynerrs = 0;
	yyerrflag = 0;
	yychar = -1;

#if YYMAXDEPTH <= 0
	if (yymaxdepth <= 0)
	{
		if ((yymaxdepth = YYEXPAND(0)) <= 0)
		{
			yyerror("yacc initialization error");
			YYABORT;
		}
	}
#endif

	{
		register YYSTYPE *yy_pv;	/* top of value stack */
		register int *yy_ps;		/* top of state stack */
		register int yy_state;		/* current state */
		register int  yy_n;		/* internal state number info */
	goto yystack;	/* moved from 6 lines above to here to please C++ */

		/*
		** get globals into registers.
		** branch to here only if YYBACKUP was called.
		*/
	yynewstate:
		yy_pv = yypv;
		yy_ps = yyps;
		yy_state = yystate;
		goto yy_newstate;

		/*
		** get globals into registers.
		** either we just started, or we just finished a reduction
		*/
	yystack:
		yy_pv = yypv;
		yy_ps = yyps;
		yy_state = yystate;

		/*
		** top of for (;;) loop while no reductions done
		*/
	yy_stack:
		/*
		** put a state and value onto the stacks
		*/
#if YYDEBUG
		/*
		** if debugging, look up token value in list of value vs.
		** name pairs.  0 and negative (-1) are special values.
		** Note: linear search is used since time is not a real
		** consideration while debugging.
		*/
		if ( yydebug )
		{
			register int yy_i;

			printf( "State %d, token ", yy_state );
			if ( yychar == 0 )
				printf( "end-of-file\n" );
			else if ( yychar < 0 )
				printf( "-none-\n" );
			else
			{
				for ( yy_i = 0; yytoks[yy_i].t_val >= 0;
					yy_i++ )
				{
					if ( yytoks[yy_i].t_val == yychar )
						break;
				}
				printf( "%s\n", yytoks[yy_i].t_name );
			}
		}
#endif /* YYDEBUG */
		if ( ++yy_ps >= &yys[ yymaxdepth ] )	/* room on stack? */
		{
			/*
			** reallocate and recover.  Note that pointers
			** have to be reset, or bad things will happen
			*/
			long yyps_index = (yy_ps - yys);
			long yypv_index = (yy_pv - yyv);
			long yypvt_index = (yypvt - yyv);
			int yynewmax;
#ifdef YYEXPAND
			yynewmax = YYEXPAND(yymaxdepth);
#else
			yynewmax = 2 * yymaxdepth;	/* double table size */
			if (yymaxdepth == YYMAXDEPTH)	/* first time growth */
			{
				char *newyys = (char *)YYNEW(int);
				char *newyyv = (char *)YYNEW(YYSTYPE);
				if (newyys != 0 && newyyv != 0)
				{
					yys = YYCOPY(newyys, yys, int);
					yyv = YYCOPY(newyyv, yyv, YYSTYPE);
				}
				else
					yynewmax = 0;	/* failed */
			}
			else				/* not first time */
			{
				yys = YYENLARGE(yys, int);
				yyv = YYENLARGE(yyv, YYSTYPE);
				if (yys == 0 || yyv == 0)
					yynewmax = 0;	/* failed */
			}
#endif
			if (yynewmax <= yymaxdepth)	/* tables not expanded */
			{
				yyerror( "yacc stack overflow" );
				YYABORT;
			}
			yymaxdepth = yynewmax;

			yy_ps = yys + yyps_index;
			yy_pv = yyv + yypv_index;
			yypvt = yyv + yypvt_index;
		}
		*yy_ps = yy_state;
		*++yy_pv = yyval;

		/*
		** we have a new state - find out what to do
		*/
	yy_newstate:
		if ( ( yy_n = yypact[ yy_state ] ) <= YYFLAG )
			goto yydefault;		/* simple state */
#if YYDEBUG
		/*
		** if debugging, need to mark whether new token grabbed
		*/
		yytmp = yychar < 0;
#endif
		if ( ( yychar < 0 ) && ( ( yychar = YYLEX() ) < 0 ) )
			yychar = 0;		/* reached EOF */
#if YYDEBUG
		if ( yydebug && yytmp )
		{
			register int yy_i;

			printf( "Received token " );
			if ( yychar == 0 )
				printf( "end-of-file\n" );
			else if ( yychar < 0 )
				printf( "-none-\n" );
			else
			{
				for ( yy_i = 0; yytoks[yy_i].t_val >= 0;
					yy_i++ )
				{
					if ( yytoks[yy_i].t_val == yychar )
						break;
				}
				printf( "%s\n", yytoks[yy_i].t_name );
			}
		}
#endif /* YYDEBUG */
		if ( ( ( yy_n += yychar ) < 0 ) || ( yy_n >= YYLAST ) )
			goto yydefault;
		if ( yychk[ yy_n = yyact[ yy_n ] ] == yychar )	/*valid shift*/
		{
			yychar = -1;
			yyval = yylval;
			yy_state = yy_n;
			if ( yyerrflag > 0 )
				yyerrflag--;
			goto yy_stack;
		}

	yydefault:
		if ( ( yy_n = yydef[ yy_state ] ) == -2 )
		{
#if YYDEBUG
			yytmp = yychar < 0;
#endif
			if ( ( yychar < 0 ) && ( ( yychar = YYLEX() ) < 0 ) )
				yychar = 0;		/* reached EOF */
#if YYDEBUG
			if ( yydebug && yytmp )
			{
				register int yy_i;

				printf( "Received token " );
				if ( yychar == 0 )
					printf( "end-of-file\n" );
				else if ( yychar < 0 )
					printf( "-none-\n" );
				else
				{
					for ( yy_i = 0;
						yytoks[yy_i].t_val >= 0;
						yy_i++ )
					{
						if ( yytoks[yy_i].t_val
							== yychar )
						{
							break;
						}
					}
					printf( "%s\n", yytoks[yy_i].t_name );
				}
			}
#endif /* YYDEBUG */
			/*
			** look through exception table
			*/
			{
				register YYCONST int *yyxi = yyexca;

				while ( ( *yyxi != -1 ) ||
					( yyxi[1] != yy_state ) )
				{
					yyxi += 2;
				}
				while ( ( *(yyxi += 2) >= 0 ) &&
					( *yyxi != yychar ) )
					;
				if ( ( yy_n = yyxi[1] ) < 0 )
					YYACCEPT;
			}
		}

		/*
		** check for syntax error
		*/
		if ( yy_n == 0 )	/* have an error */
		{
			/* no worry about speed here! */
			switch ( yyerrflag )
			{
			case 0:		/* new error */
				yyerror( "syntax error" );
				goto skip_init;
			yyerrlab:
				/*
				** get globals into registers.
				** we have a user generated syntax type error
				*/
				yy_pv = yypv;
				yy_ps = yyps;
				yy_state = yystate;
			skip_init:
				yynerrs++;
				/* FALLTHRU */
			case 1:
			case 2:		/* incompletely recovered error */
					/* try again... */
				yyerrflag = 3;
				/*
				** find state where "error" is a legal
				** shift action
				*/
				while ( yy_ps >= yys )
				{
					yy_n = yypact[ *yy_ps ] + YYERRCODE;
					if ( yy_n >= 0 && yy_n < YYLAST &&
						yychk[yyact[yy_n]] == YYERRCODE)					{
						/*
						** simulate shift of "error"
						*/
						yy_state = yyact[ yy_n ];
						goto yy_stack;
					}
					/*
					** current state has no shift on
					** "error", pop stack
					*/
#if YYDEBUG
#	define _POP_ "Error recovery pops state %d, uncovers state %d\n"
					if ( yydebug )
						printf( _POP_, *yy_ps,
							yy_ps[-1] );
#	undef _POP_
#endif
					yy_ps--;
					yy_pv--;
				}
				/*
				** there is no state on stack with "error" as
				** a valid shift.  give up.
				*/
				YYABORT;
			case 3:		/* no shift yet; eat a token */
#if YYDEBUG
				/*
				** if debugging, look up token in list of
				** pairs.  0 and negative shouldn't occur,
				** but since timing doesn't matter when
				** debugging, it doesn't hurt to leave the
				** tests here.
				*/
				if ( yydebug )
				{
					register int yy_i;

					printf( "Error recovery discards " );
					if ( yychar == 0 )
						printf( "token end-of-file\n" );
					else if ( yychar < 0 )
						printf( "token -none-\n" );
					else
					{
						for ( yy_i = 0;
							yytoks[yy_i].t_val >= 0;
							yy_i++ )
						{
							if ( yytoks[yy_i].t_val
								== yychar )
							{
								break;
							}
						}
						printf( "token %s\n",
							yytoks[yy_i].t_name );
					}
				}
#endif /* YYDEBUG */
				if ( yychar == 0 )	/* reached EOF. quit */
					YYABORT;
				yychar = -1;
				goto yy_newstate;
			}
		}/* end if ( yy_n == 0 ) */
		/*
		** reduction by production yy_n
		** put stack tops, etc. so things right after switch
		*/
#if YYDEBUG
		/*
		** if debugging, print the string that is the user's
		** specification of the reduction which is just about
		** to be done.
		*/
		if ( yydebug )
			printf( "Reduce by (%d) \"%s\"\n",
				yy_n, yyreds[ yy_n ] );
#endif
		yytmp = yy_n;			/* value to switch over */
		yypvt = yy_pv;			/* $vars top of value stack */
		/*
		** Look in goto table for next state
		** Sorry about using yy_state here as temporary
		** register variable, but why not, if it works...
		** If yyr2[ yy_n ] doesn't have the low order bit
		** set, then there is no action to be done for
		** this reduction.  So, no saving & unsaving of
		** registers done.  The only difference between the
		** code just after the if and the body of the if is
		** the goto yy_stack in the body.  This way the test
		** can be made before the choice of what to do is needed.
		*/
		{
			/* length of production doubled with extra bit */
			register int yy_len = yyr2[ yy_n ];

			if ( !( yy_len & 01 ) )
			{
				yy_len >>= 1;
				yyval = ( yy_pv -= yy_len )[1];	/* $$ = $1 */
				yy_state = yypgo[ yy_n = yyr1[ yy_n ] ] +
					*( yy_ps -= yy_len ) + 1;
				if ( yy_state >= YYLAST ||
					yychk[ yy_state =
					yyact[ yy_state ] ] != -yy_n )
				{
					yy_state = yyact[ yypgo[ yy_n ] ];
				}
				goto yy_stack;
			}
			yy_len >>= 1;
			yyval = ( yy_pv -= yy_len )[1];	/* $$ = $1 */
			yy_state = yypgo[ yy_n = yyr1[ yy_n ] ] +
				*( yy_ps -= yy_len ) + 1;
			if ( yy_state >= YYLAST ||
				yychk[ yy_state = yyact[ yy_state ] ] != -yy_n )
			{
				yy_state = yyact[ yypgo[ yy_n ] ];
			}
		}
					/* save until reenter driver code */
		yystate = yy_state;
		yyps = yy_ps;
		yypv = yy_pv;
	}
	/*
	** code supplied by user is placed in this switch
	*/
	switch( yytmp )
	{
		
case 1:
# line 65 "parser.gram"
{
	printReduce("pgm -> PROGRAM ID ; body .");
	} break;
case 2:
# line 71 "parser.gram"
{
	printReduce("body -> dclpart compstmt");
	} break;
case 3:
# line 75 "parser.gram"
{
	printReduce("body -> compstmt");
	} break;
case 4:
# line 81 "parser.gram"
{
	printReduce("dclpart -> VAR dcls");
	} break;
case 5:
# line 85 "parser.gram"
{
    printReduce("dclpart -> subdcls");
    } break;
case 6:
# line 89 "parser.gram"
{
    printReduce("dclpart -> VAR dcls subdcls");
    } break;
case 7:
# line 95 "parser.gram"
{
	printReduce("dcls -> dcl");
	} break;
case 8:
# line 99 "parser.gram"
{
	printReduce("dcls -> dcls dcl");
	} break;
case 9:
# line 105 "parser.gram"
{
	printReduce("dcl -> idlist : type ;");
	} break;
case 10:
# line 111 "parser.gram"
{
	printReduce("idlist -> ID");
	} break;
case 11:
# line 115 "parser.gram"
{
	printReduce("idlist -> idlist , ID");
	} break;
case 12:
# line 121 "parser.gram"
{
	printReduce("type -> STDTYPE");
	} break;
case 13:
# line 125 "parser.gram"
{
	printReduce("type -> arraytype");
	} break;
case 14:
# line 131 "parser.gram"
{
	printReduce("arraytype -> ARRAY [ CON .. CON ] OF STDTYPE");
	} break;
case 15:
# line 137 "parser.gram"
{
    printReduce("subdcls -> subdcl");
    } break;
case 16:
# line 141 "parser.gram"
{
    printReduce("subdcls -> subdcls subdcl");
    } break;
case 17:
# line 147 "parser.gram"
{
    printReduce("subdcl -> subhead ; body ;");
    } break;
case 18:
# line 153 "parser.gram"
{
    printReduce("subhead -> FUNCTION ID args COLON STDTYPE");
    } break;
case 19:
# line 157 "parser.gram"
{
    printReduce("subhead -> PROCEDURE ID args");
    } break;
case 20:
# line 163 "parser.gram"
{
    printReduce("args -> ( dcls )");
    } break;
case 21:
# line 167 "parser.gram"
{
    printReduce("args -> ( )");
    } break;
case 22:
# line 173 "parser.gram"
{
	printReduce("compstmt -> BEGIN stmts END");
	} break;
case 23:
# line 179 "parser.gram"
{
	printReduce("stmts -> stmt");
	} break;
case 24:
# line 183 "parser.gram"
{
	printReduce("stmts -> stmts ; stmt");
	} break;
case 25:
# line 189 "parser.gram"
{
	printReduce("stmt -> elstmt ");
	} break;
case 26:
# line 193 "parser.gram"
{
	printReduce("stmt -> IF expr THEN stmt ELSE stmt");
	} break;
case 27:
# line 197 "parser.gram"
{
	printReduce("stmt -> IF expr THEN stmt");
	} break;
case 28:
# line 201 "parser.gram"
{
	printReduce("stmt -> WHILE expr DO stmt");
	} break;
case 29:
# line 207 "parser.gram"
{
	printReduce("elstmt -> vbl := expr");
	cout << "assign;"<<endl; //code translation!
	} break;
case 30:
# line 212 "parser.gram"
{
    printReduce("elstmt -> RETURN expr");
    } break;
case 31:
# line 216 "parser.gram"
{
    printReduce("elstmt -> RETURN");
    } break;
case 32:
# line 220 "parser.gram"
{
    printReduce("elstmt -> procfunc");
    } break;
case 33:
# line 224 "parser.gram"
{
	printReduce("elstmt -> compstmt");
	} break;
case 34:
# line 228 "parser.gram"
{
	printReduce("elstmt -> READ ( vbllist )");
	} break;
case 35:
# line 232 "parser.gram"
{
	printReduce("elstmt -> READLN ( vbllist )");
	} break;
case 36:
# line 236 "parser.gram"
{
	printReduce("elstmt -> READLN ( )");
	} break;
case 37:
# line 240 "parser.gram"
{
	printReduce("elstmt -> WRITE ( exprlist )");
	} break;
case 38:
# line 244 "parser.gram"
{
	printReduce("elstmt -> WRITELN ( exprlist )");
	} break;
case 39:
# line 248 "parser.gram"
{
	printReduce("elstmt -> WRITELN ( )");
	} break;
case 40:
# line 254 "parser.gram"
{
	printReduce("vbl -> ID");
	cout << "push(" << ((PSymtabEntry)yypvt[-0])->getAddress() << ");" <<endl;
	} break;
case 41:
# line 259 "parser.gram"
{
	printReduce("vbl -> ID [ expr ]");
	} break;
case 42:
# line 265 "parser.gram"
{
	printReduce("vbllist -> vbl");
	} break;
case 43:
# line 269 "parser.gram"
{
	printReduce("vbllist -> vbllist , vbl");
	} break;
case 44:
# line 275 "parser.gram"
{
    printReduce("procfunc -> ID ( )");
    } break;
case 45:
# line 279 "parser.gram"
{
    printReduce("procfunc -> ID ( exprlist )");
    } break;
case 46:
# line 285 "parser.gram"
{
	printReduce("exprlist -> expr");
	} break;
case 47:
# line 289 "parser.gram"
{
	printReduce("exprlist -> exprlist , expr");
	} break;
case 48:
# line 295 "parser.gram"
{
	printReduce("expr -> simexp");
	} break;
case 49:
# line 299 "parser.gram"
{
	printReduce("expr -> simexp RELOP expr");
	} break;
case 50:
# line 305 "parser.gram"
{
	printReduce("simexp -> term");
	} break;
case 51:
# line 309 "parser.gram"
{
	printReduce("simexp -> UNARY term");
	} break;
case 52:
# line 313 "parser.gram"
{
	printReduce("simexp -> simexp ADDOP term");
	} break;
case 53:
# line 319 "parser.gram"
{
	printReduce("term -> factor");
	} break;
case 54:
# line 323 "parser.gram"
{
	printReduce("term -> term MULOP factor");
	cout << "binary(*);"<<endl; //code translation
	} break;
case 55:
# line 330 "parser.gram"
{
        printReduce("factor -> vbl ");
        cout << "deref;" << endl; //code translation
        } break;
case 56:
# line 335 "parser.gram"
{
	printReduce("factor -> CON");
	lextok = (PLexToken) yypvt[-0];
	cout << "push("<<lextok->getLexeme()<<");"<<endl; //code translation
	/*note that we're just using the literal from Pascal
	//if we want the integer value use (int)(lextok->getLexeme())*/
	} break;
case 57:
# line 343 "parser.gram"
{
	printReduce("factor -> ( expr )");
	} break;
case 58:
# line 347 "parser.gram"
{
        printReduce("factor -> procfunc");
        } break;
# line	532 "/usr/share/lib/ccs/yaccpar"
	}
	goto yystack;		/* reset registers in driver code */
}

