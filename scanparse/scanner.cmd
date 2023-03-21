s/p, m)/int *p, int m)/
s/int \*p\;//
s/yyoutput(c)/void yyoutput(int c) {/
s/yyunput(c)/void yyunput(int c) {/
/int c\; {/d
#s/yyfussy://
/__attribute__/d
$a\
#include "scanner.fcts"
