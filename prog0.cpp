//>>>> Begin Example Pascal Compiler <<<<
#include "stackmachine.pro"
//>>>> Controller::open_file()=prog0.p
//>>>> Starting parser via ScanParser()
//++++Token: LineNo=1 Token=257 Lexeme='program'
//++++Token: LineNo=1 Token=263 Lexeme='simple'
//++++Token: LineNo=1 Token=260 Lexeme=';'
//====LINE[    1]    program simple;
//++++Token: LineNo=2 Token=258 Lexeme='begin'
//====LINE[    2]    begin
//++++Token: LineNo=3 Token=267 Lexeme='write'
//++++Token: LineNo=3 Token=265 Lexeme='('
//++++Token: LineNo=3 Token=264 Lexeme='9999'
//----Reduce: factor -> CONST 
push(9999);
//----Reduce: expr -> factor
//++++Token: LineNo=3 Token=266 Lexeme=')'
//----Reduce: writestmt -> WRITE ( expr )
cout << pop <<endl;
//----Reduce: stmt -> WriteStmt 
//----Reduce: stmts -> stmt 
//++++Token: LineNo=3 Token=260 Lexeme=';'
//====LINE[    3]        write(9999);
//++++Token: LineNo=4 Token=263 Lexeme='i'
//----Reduce: var -> ID
push(2);
//++++Token: LineNo=4 Token=261 Lexeme=':='
//++++Token: LineNo=4 Token=264 Lexeme='123'
//----Reduce: factor -> CONST 
push(123);
//----Reduce: expr -> factor
//++++Token: LineNo=4 Token=260 Lexeme=';'
//----Reduce: elstmt -> ID := expr
assign;
//----Reduce: stmt -> elstmt 
//----Reduce: stmts -> stmts ; stmt 
//====LINE[    4]        i := 123;
//++++Token: LineNo=5 Token=263 Lexeme='j'
//----Reduce: var -> ID
push(3);
//++++Token: LineNo=5 Token=261 Lexeme=':='
//++++Token: LineNo=5 Token=264 Lexeme='45'
//----Reduce: factor -> CONST 
push(45);
//----Reduce: expr -> factor
//++++Token: LineNo=5 Token=260 Lexeme=';'
//----Reduce: elstmt -> ID := expr
assign;
//----Reduce: stmt -> elstmt 
//----Reduce: stmts -> stmts ; stmt 
//====LINE[    5]        j := 45;
//++++Token: LineNo=6 Token=263 Lexeme='k'
//----Reduce: var -> ID
push(4);
//++++Token: LineNo=6 Token=261 Lexeme=':='
//++++Token: LineNo=6 Token=263 Lexeme='i'
//----Reduce: var -> ID
push(2);
//----Reduce: factor -> var 
deref;
//----Reduce: expr -> factor
//++++Token: LineNo=6 Token=269 Lexeme='*'
//++++Token: LineNo=6 Token=264 Lexeme='2'
//----Reduce: factor -> CONST 
push(2);
//----Reduce: expr -> expr MULOP factor
binary(*);
//++++Token: LineNo=6 Token=260 Lexeme=';'
//----Reduce: elstmt -> ID := expr
assign;
//----Reduce: stmt -> elstmt 
//----Reduce: stmts -> stmts ; stmt 
//====LINE[    6]        k:=i * 2;
//++++Token: LineNo=7 Token=267 Lexeme='write'
//++++Token: LineNo=7 Token=265 Lexeme='('
//++++Token: LineNo=7 Token=263 Lexeme='k'
//----Reduce: var -> ID
push(4);
//----Reduce: factor -> var 
deref;
//----Reduce: expr -> factor
//++++Token: LineNo=7 Token=266 Lexeme=')'
//----Reduce: writestmt -> WRITE ( expr )
cout << pop <<endl;
//----Reduce: stmt -> WriteStmt 
//----Reduce: stmts -> stmts ; stmt 
//++++Token: LineNo=7 Token=260 Lexeme=';'
//====LINE[    7]        write(k);
//++++Token: LineNo=8 Token=267 Lexeme='write'
//++++Token: LineNo=8 Token=265 Lexeme='('
//++++Token: LineNo=8 Token=263 Lexeme='j'
//----Reduce: var -> ID
push(3);
//----Reduce: factor -> var 
deref;
//----Reduce: expr -> factor
//++++Token: LineNo=8 Token=266 Lexeme=')'
//----Reduce: writestmt -> WRITE ( expr )
cout << pop <<endl;
//----Reduce: stmt -> WriteStmt 
//----Reduce: stmts -> stmts ; stmt 
//====LINE[    8]        write(j)
//++++Token: LineNo=9 Token=259 Lexeme='end'
//----Reduce: body -> BEGIN stmts END  
//++++Token: LineNo=9 Token=262 Lexeme='.'
//----Reduce: pgm -> PROGRAM ID ; Block .
//====LINE[    9]    end.
#include "stackmachine.epi"
//>>>>  End  Example Pascal Compiler <<<<
