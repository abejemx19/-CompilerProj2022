int yylook();
int yyback(int*,int);
//void yyless(int); from earlier
int yyless(int);
void yyunput(int);
int yywrap();
void ckout();
int ret_token(int);
int ck_reserved_wd();
