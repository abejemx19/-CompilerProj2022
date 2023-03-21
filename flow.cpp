//>>>> Begin Example Pascal Compiler <<<<
#include "stackmachine.pro"
//>>>> Controller::open_file()=flow.p
//>>>> Starting parser via ScanParser()
//++++Token: LineNo=1 Token=257 Lexeme='program'
//++++Token: LineNo=1 Token=265 Lexeme='flow'
//++++Token: LineNo=1 Token=261 Lexeme=';'
//====LINE[    1]    program flow;
//++++Token: LineNo=2 Token=260 Lexeme='var'
//====LINE[    2]    VAR
//++++Token: LineNo=3 Token=265 Lexeme='i'
//----Reduce: idlist -> ID
//++++Token: LineNo=3 Token=277 Lexeme=','
//++++Token: LineNo=3 Token=265 Lexeme='j'
//----Reduce: idlist -> idlist , ID
//++++Token: LineNo=3 Token=277 Lexeme=','
//++++Token: LineNo=3 Token=265 Lexeme='k'
//----Reduce: idlist -> idlist , ID
//++++Token: LineNo=3 Token=262 Lexeme=':'
//++++Token: LineNo=3 Token=276 Lexeme='integer'
//----Reduce: type -> STDTYPE
//++++Token: LineNo=3 Token=261 Lexeme=';'
//----Reduce: dcl -> idlist : type ;
/*
$3dt = 1
Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
*///----Reduce: dcls -> dcl
//====LINE[    3]        i,j,k: integer;
//++++Token: LineNo=4 Token=265 Lexeme='a'
//----Reduce: idlist -> ID
//++++Token: LineNo=4 Token=277 Lexeme=','
//++++Token: LineNo=4 Token=265 Lexeme='b'
//----Reduce: idlist -> idlist , ID
//++++Token: LineNo=4 Token=277 Lexeme=','
//++++Token: LineNo=4 Token=265 Lexeme='c'
//----Reduce: idlist -> idlist , ID
//++++Token: LineNo=4 Token=262 Lexeme=':'
//++++Token: LineNo=4 Token=276 Lexeme='real'
//----Reduce: type -> STDTYPE
//++++Token: LineNo=4 Token=261 Lexeme=';'
//----Reduce: dcl -> idlist : type ;
/*
$3dt = 2
Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*///----Reduce: dcls -> dcls dcl
//====LINE[    4]        a,b,c: real;
//++++Token: LineNo=5 Token=265 Lexeme='m'
//----Reduce: idlist -> ID
//++++Token: LineNo=5 Token=262 Lexeme=':'
//++++Token: LineNo=5 Token=282 Lexeme='array'
//++++Token: LineNo=5 Token=289 Lexeme='['
//++++Token: LineNo=5 Token=266 Lexeme='1'
//++++Token: LineNo=5 Token=291 Lexeme='..'
//++++Token: LineNo=5 Token=266 Lexeme='10'
//++++Token: LineNo=5 Token=290 Lexeme=']'
//++++Token: LineNo=5 Token=283 Lexeme='of'
//++++Token: LineNo=5 Token=276 Lexeme='integer'
//----Reduce: arraytype -> ARRAY [ CON .. CON ] OF STDTYPE
//----Reduce: type -> arraytype
//++++Token: LineNo=5 Token=261 Lexeme=';'
//----Reduce: dcl -> idlist : type ;
/*
$3dt = -1
Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*///----Reduce: dcls -> dcls dcl
//====LINE[    5]        m: array [1..10] of integer;
//++++Token: LineNo=6 Token=258 Lexeme='begin'
//----Reduce: dclpart -> VAR dcls
//====LINE[    6]    BEGIN
//++++Token: LineNo=7 Token=265 Lexeme='i'
//++++Token: LineNo=7 Token=263 Lexeme=':='
//----Reduce: vbl -> ID
push(0);//++++Token: LineNo=7 Token=266 Lexeme='1'
//----Reduce: factor -> CON
push(1);
//----Reduce: term -> factor
//++++Token: LineNo=7 Token=261 Lexeme=';'
//----Reduce: simexp -> term
//----Reduce: expr -> simexp
//----Reduce: elstmt -> vbl := expr
assign;
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*///----Reduce: stmt -> elstmt 
//----Reduce: stmts -> stmt
//====LINE[    7]        i := 1;
//++++Token: LineNo=8 Token=285 Lexeme='read'
//++++Token: LineNo=8 Token=267 Lexeme='('
//++++Token: LineNo=8 Token=265 Lexeme='k'
//++++Token: LineNo=8 Token=268 Lexeme=')'
//----Reduce: vbl -> ID
push(2);//----Reduce: vbllist -> vbl
//----Reduce: elstmt -> READ ( vbllist )
cin >> reg; push(reg); assign;
//----Reduce: stmt -> elstmt 
//----Reduce: stmts -> stmts ; stmt
//++++Token: LineNo=8 Token=261 Lexeme=';'
//====LINE[    8]        read(k);
//++++Token: LineNo=9 Token=265 Lexeme='j'
//++++Token: LineNo=9 Token=263 Lexeme=':='
//----Reduce: vbl -> ID
push(1);//++++Token: LineNo=9 Token=266 Lexeme='0'
//----Reduce: factor -> CON
push(0);
//----Reduce: term -> factor
//++++Token: LineNo=9 Token=261 Lexeme=';'
//----Reduce: simexp -> term
//----Reduce: expr -> simexp
//----Reduce: elstmt -> vbl := expr
assign;
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*///----Reduce: stmt -> elstmt 
//----Reduce: stmts -> stmts ; stmt
//====LINE[    9]        j := 0;
//++++Token: LineNo=10 Token=281 Lexeme='while'
L1:
//++++Token: LineNo=10 Token=267 Lexeme='('
//++++Token: LineNo=10 Token=265 Lexeme='k'
//++++Token: LineNo=10 Token=287 Lexeme='<>'
//----Reduce: vbl -> ID
push(2);//----Reduce: factor -> vbl 
deref;
//----Reduce: term -> factor
//----Reduce: simexp -> term
//++++Token: LineNo=10 Token=266 Lexeme='0'
//----Reduce: factor -> CON
push(0);
//----Reduce: term -> factor
//++++Token: LineNo=10 Token=268 Lexeme=')'
//----Reduce: simexp -> term
//----Reduce: expr -> simexp
//----Reduce: expr -> simexp RELOP expr
intbinary(!=);
//----Reduce: factor -> ( expr )
//----Reduce: term -> factor
//++++Token: LineNo=10 Token=271 Lexeme='and'
//++++Token: LineNo=10 Token=267 Lexeme='('
//++++Token: LineNo=10 Token=265 Lexeme='i'
//++++Token: LineNo=10 Token=287 Lexeme='<'
//----Reduce: vbl -> ID
push(0);//----Reduce: factor -> vbl 
deref;
//----Reduce: term -> factor
//----Reduce: simexp -> term
//++++Token: LineNo=10 Token=266 Lexeme='11'
//----Reduce: factor -> CON
push(11);
//----Reduce: term -> factor
//++++Token: LineNo=10 Token=268 Lexeme=')'
//----Reduce: simexp -> term
//----Reduce: expr -> simexp
//----Reduce: expr -> simexp RELOP expr
intbinary(<);
//----Reduce: factor -> ( expr )
//----Reduce: term -> term MULOP factor
intbinary(&);
//++++Token: LineNo=10 Token=284 Lexeme='do'
//----Reduce: simexp -> term
//----Reduce: expr -> simexp
//----Reduce: do -> DOTK
if(!pop) goto L2;
//====LINE[   10]        WHILE (k <> 0) and (i < 11) DO
//++++Token: LineNo=11 Token=258 Lexeme='begin'
//====LINE[   11]        BEGIN
//++++Token: LineNo=12 Token=265 Lexeme='m'
//++++Token: LineNo=12 Token=289 Lexeme='['
//++++Token: LineNo=12 Token=265 Lexeme='i'
//++++Token: LineNo=12 Token=290 Lexeme=']'
//----Reduce: vbl -> ID
push(0);//----Reduce: factor -> vbl 
deref;
//----Reduce: term -> factor
//----Reduce: simexp -> term
//----Reduce: expr -> simexp
//----Reduce: vbl -> ID [ expr ]
//++++Token: LineNo=12 Token=263 Lexeme=':='
//++++Token: LineNo=12 Token=265 Lexeme='k'
//++++Token: LineNo=12 Token=261 Lexeme=';'
//----Reduce: vbl -> ID
push(2);//----Reduce: factor -> vbl 
deref;
//----Reduce: term -> factor
//----Reduce: simexp -> term
//----Reduce: expr -> simexp
//----Reduce: elstmt -> vbl := expr
assign;
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*///----Reduce: stmt -> elstmt 
//----Reduce: stmts -> stmt
//====LINE[   12]           m[i] := k;
//++++Token: LineNo=13 Token=265 Lexeme='i'
//++++Token: LineNo=13 Token=263 Lexeme=':='
//----Reduce: vbl -> ID
push(0);//++++Token: LineNo=13 Token=265 Lexeme='i'
//++++Token: LineNo=13 Token=272 Lexeme='+'
//----Reduce: vbl -> ID
push(0);//----Reduce: factor -> vbl 
deref;
//----Reduce: term -> factor
//----Reduce: simexp -> term
//++++Token: LineNo=13 Token=266 Lexeme='1'
//----Reduce: factor -> CON
push(1);
//----Reduce: term -> factor
//++++Token: LineNo=13 Token=261 Lexeme=';'
//----Reduce: simexp -> simexp ADDOP term
binary(+);
//----Reduce: expr -> simexp
//----Reduce: elstmt -> vbl := expr
assign;
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*///----Reduce: stmt -> elstmt 
//----Reduce: stmts -> stmts ; stmt
//====LINE[   13]           i := i+1;
//++++Token: LineNo=14 Token=285 Lexeme='read'
//++++Token: LineNo=14 Token=267 Lexeme='('
//++++Token: LineNo=14 Token=265 Lexeme='k'
//++++Token: LineNo=14 Token=268 Lexeme=')'
//----Reduce: vbl -> ID
push(2);//----Reduce: vbllist -> vbl
//----Reduce: elstmt -> READ ( vbllist )
cin >> reg; push(reg); assign;
//----Reduce: stmt -> elstmt 
//----Reduce: stmts -> stmts ; stmt
//====LINE[   14]           read(k)
//++++Token: LineNo=15 Token=259 Lexeme='end'
//----Reduce: compstmt -> BEGIN stmts END
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*///----Reduce: elstmt -> compstmt
//----Reduce: stmt -> elstmt 
//----Reduce: stmt -> while expr do stmt
goto L1;
L2:
//----Reduce: stmts -> stmts ; stmt
//++++Token: LineNo=15 Token=261 Lexeme=';'
//====LINE[   15]        END;
//++++Token: LineNo=16 Token=265 Lexeme='j'
//++++Token: LineNo=16 Token=263 Lexeme=':='
//----Reduce: vbl -> ID
push(1);//++++Token: LineNo=16 Token=265 Lexeme='i'
//++++Token: LineNo=16 Token=272 Lexeme='-'
//----Reduce: vbl -> ID
push(0);//----Reduce: factor -> vbl 
deref;
//----Reduce: term -> factor
//----Reduce: simexp -> term
//++++Token: LineNo=16 Token=266 Lexeme='1'
//----Reduce: factor -> CON
push(1);
//----Reduce: term -> factor
//++++Token: LineNo=16 Token=261 Lexeme=';'
//----Reduce: simexp -> simexp ADDOP term
binary(-);
//----Reduce: expr -> simexp
//----Reduce: elstmt -> vbl := expr
assign;
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*///----Reduce: stmt -> elstmt 
//----Reduce: stmts -> stmts ; stmt
//====LINE[   16]        j := i-1;
//++++Token: LineNo=17 Token=274 Lexeme='if'
//++++Token: LineNo=17 Token=265 Lexeme='j'
//++++Token: LineNo=17 Token=287 Lexeme='<>'
//----Reduce: vbl -> ID
push(1);//----Reduce: factor -> vbl 
deref;
//----Reduce: term -> factor
//----Reduce: simexp -> term
//++++Token: LineNo=17 Token=266 Lexeme='0'
//----Reduce: factor -> CON
push(0);
//----Reduce: term -> factor
//++++Token: LineNo=17 Token=275 Lexeme='then'
//----Reduce: simexp -> term
//----Reduce: expr -> simexp
//----Reduce: expr -> simexp RELOP expr
intbinary(!=);
//----Reduce: then -> THENTK
if(!pop) goto L3;
//====LINE[   17]        IF j<>0  THEN 
//++++Token: LineNo=18 Token=258 Lexeme='begin'
//====LINE[   18]        BEGIN
//++++Token: LineNo=19 Token=270 Lexeme='writeln'
//++++Token: LineNo=19 Token=267 Lexeme='('
//++++Token: LineNo=19 Token=265 Lexeme='j'
//++++Token: LineNo=19 Token=268 Lexeme=')'
//----Reduce: vbl -> ID
push(1);//----Reduce: factor -> vbl 
deref;
//----Reduce: term -> factor
//----Reduce: simexp -> term
//----Reduce: expr -> simexp
//----Reduce: exprlist -> expr
cout << pop << ' ';
//----Reduce: elstmt -> WRITELN ( exprlist )
cout << endl;
//----Reduce: stmt -> elstmt 
//----Reduce: stmts -> stmt
//++++Token: LineNo=19 Token=261 Lexeme=';'
//====LINE[   19]           writeln(j);
//++++Token: LineNo=20 Token=265 Lexeme='i'
//++++Token: LineNo=20 Token=263 Lexeme=':='
//----Reduce: vbl -> ID
push(0);//++++Token: LineNo=20 Token=266 Lexeme='0'
//----Reduce: factor -> CON
push(0);
//----Reduce: term -> factor
//++++Token: LineNo=20 Token=261 Lexeme=';'
//----Reduce: simexp -> term
//----Reduce: expr -> simexp
//----Reduce: elstmt -> vbl := expr
assign;
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*///----Reduce: stmt -> elstmt 
//----Reduce: stmts -> stmts ; stmt
//====LINE[   20]           i := 0;
//++++Token: LineNo=21 Token=265 Lexeme='a'
//++++Token: LineNo=21 Token=263 Lexeme=':='
//----Reduce: vbl -> ID
push(3);//++++Token: LineNo=21 Token=266 Lexeme='0.0'
//----Reduce: factor -> CON
push(0.0);
//----Reduce: term -> factor
//++++Token: LineNo=21 Token=261 Lexeme=';'
//----Reduce: simexp -> term
//----Reduce: expr -> simexp
//----Reduce: elstmt -> vbl := expr
assign;
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*///----Reduce: stmt -> elstmt 
//----Reduce: stmts -> stmts ; stmt
//====LINE[   21]           a := 0.0;
//++++Token: LineNo=22 Token=281 Lexeme='while'
L4:
//++++Token: LineNo=22 Token=267 Lexeme='('
//++++Token: LineNo=22 Token=265 Lexeme='i'
//++++Token: LineNo=22 Token=287 Lexeme='<='
//----Reduce: vbl -> ID
push(0);//----Reduce: factor -> vbl 
deref;
//----Reduce: term -> factor
//----Reduce: simexp -> term
//++++Token: LineNo=22 Token=265 Lexeme='j'
//++++Token: LineNo=22 Token=268 Lexeme=')'
//----Reduce: vbl -> ID
push(1);//----Reduce: factor -> vbl 
deref;
//----Reduce: term -> factor
//----Reduce: simexp -> term
//----Reduce: expr -> simexp
//----Reduce: expr -> simexp RELOP expr
intbinary(<=);
//----Reduce: factor -> ( expr )
//----Reduce: term -> factor
//++++Token: LineNo=22 Token=284 Lexeme='do'
//----Reduce: simexp -> term
//----Reduce: expr -> simexp
//----Reduce: do -> DOTK
if(!pop) goto L5;
//====LINE[   22]           WHILE(i<=j) DO
//++++Token: LineNo=23 Token=258 Lexeme='begin'
//====LINE[   23]           BEGIN
//++++Token: LineNo=24 Token=274 Lexeme='if'
//++++Token: LineNo=24 Token=265 Lexeme='m'
//++++Token: LineNo=24 Token=289 Lexeme='['
//++++Token: LineNo=24 Token=265 Lexeme='i'
//++++Token: LineNo=24 Token=290 Lexeme=']'
//----Reduce: vbl -> ID
push(0);//----Reduce: factor -> vbl 
deref;
//----Reduce: term -> factor
//----Reduce: simexp -> term
//----Reduce: expr -> simexp
//----Reduce: vbl -> ID [ expr ]
//----Reduce: factor -> vbl 
deref;
//----Reduce: term -> factor
//++++Token: LineNo=24 Token=287 Lexeme='<'
//----Reduce: simexp -> term
//++++Token: LineNo=24 Token=266 Lexeme='0'
//----Reduce: factor -> CON
push(0);
//----Reduce: term -> factor
//++++Token: LineNo=24 Token=275 Lexeme='then'
//----Reduce: simexp -> term
//----Reduce: expr -> simexp
//----Reduce: expr -> simexp RELOP expr
intbinary(<);
//----Reduce: then -> THENTK
if(!pop) goto L6;
//++++Token: LineNo=24 Token=265 Lexeme='m'
//++++Token: LineNo=24 Token=289 Lexeme='['
//++++Token: LineNo=24 Token=265 Lexeme='i'
//++++Token: LineNo=24 Token=290 Lexeme=']'
//----Reduce: vbl -> ID
push(0);//----Reduce: factor -> vbl 
deref;
//----Reduce: term -> factor
//----Reduce: simexp -> term
//----Reduce: expr -> simexp
//----Reduce: vbl -> ID [ expr ]
//++++Token: LineNo=24 Token=263 Lexeme=':='
//++++Token: LineNo=24 Token=288 Lexeme='-'
//++++Token: LineNo=24 Token=265 Lexeme='m'
//++++Token: LineNo=24 Token=289 Lexeme='['
//++++Token: LineNo=24 Token=265 Lexeme='i'
//++++Token: LineNo=24 Token=290 Lexeme=']'
//----Reduce: vbl -> ID
push(0);//----Reduce: factor -> vbl 
deref;
//----Reduce: term -> factor
//----Reduce: simexp -> term
//----Reduce: expr -> simexp
//----Reduce: vbl -> ID [ expr ]
//----Reduce: factor -> vbl 
deref;
//----Reduce: term -> factor
//++++Token: LineNo=24 Token=261 Lexeme=';'
//----Reduce: simexp -> UNARY term
//----Reduce: expr -> simexp
//----Reduce: elstmt -> vbl := expr
assign;
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*///----Reduce: stmt -> elstmt 
//----Reduce: stmt -> IF expr THEN stmt
L6:
//----Reduce: stmts -> stmt
//====LINE[   24]              IF m[i]<0 THEN m[i] := -m[i];
//++++Token: LineNo=25 Token=270 Lexeme='writeln'
//++++Token: LineNo=25 Token=267 Lexeme='('
//++++Token: LineNo=25 Token=265 Lexeme='m'
//++++Token: LineNo=25 Token=289 Lexeme='['
//++++Token: LineNo=25 Token=265 Lexeme='i'
//++++Token: LineNo=25 Token=290 Lexeme=']'
//----Reduce: vbl -> ID
push(0);//----Reduce: factor -> vbl 
deref;
//----Reduce: term -> factor
//----Reduce: simexp -> term
//----Reduce: expr -> simexp
//----Reduce: vbl -> ID [ expr ]
//----Reduce: factor -> vbl 
deref;
//----Reduce: term -> factor
//++++Token: LineNo=25 Token=268 Lexeme=')'
//----Reduce: simexp -> term
//----Reduce: expr -> simexp
//----Reduce: exprlist -> expr
cout << pop << ' ';
//----Reduce: elstmt -> WRITELN ( exprlist )
cout << endl;
//----Reduce: stmt -> elstmt 
//----Reduce: stmts -> stmts ; stmt
//++++Token: LineNo=25 Token=261 Lexeme=';'
//====LINE[   25]              writeln(m[i]);
//++++Token: LineNo=26 Token=265 Lexeme='a'
//++++Token: LineNo=26 Token=263 Lexeme=':='
//----Reduce: vbl -> ID
push(3);//++++Token: LineNo=26 Token=265 Lexeme='a'
//++++Token: LineNo=26 Token=272 Lexeme='+'
//----Reduce: vbl -> ID
push(3);//----Reduce: factor -> vbl 
deref;
//----Reduce: term -> factor
//----Reduce: simexp -> term
//++++Token: LineNo=26 Token=265 Lexeme='m'
//++++Token: LineNo=26 Token=289 Lexeme='['
//++++Token: LineNo=26 Token=265 Lexeme='i'
//++++Token: LineNo=26 Token=290 Lexeme=']'
//----Reduce: vbl -> ID
push(0);//----Reduce: factor -> vbl 
deref;
//----Reduce: term -> factor
//----Reduce: simexp -> term
//----Reduce: expr -> simexp
//----Reduce: vbl -> ID [ expr ]
//----Reduce: factor -> vbl 
deref;
//----Reduce: term -> factor
//++++Token: LineNo=26 Token=261 Lexeme=';'
//----Reduce: simexp -> simexp ADDOP term
binary(+);
//----Reduce: expr -> simexp
//----Reduce: elstmt -> vbl := expr
assign;
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*///----Reduce: stmt -> elstmt 
//----Reduce: stmts -> stmts ; stmt
//====LINE[   26]              a := a + m[i];
//++++Token: LineNo=27 Token=265 Lexeme='i'
//++++Token: LineNo=27 Token=263 Lexeme=':='
//----Reduce: vbl -> ID
push(0);//++++Token: LineNo=27 Token=265 Lexeme='i'
//++++Token: LineNo=27 Token=272 Lexeme='+'
//----Reduce: vbl -> ID
push(0);//----Reduce: factor -> vbl 
deref;
//----Reduce: term -> factor
//----Reduce: simexp -> term
//++++Token: LineNo=27 Token=266 Lexeme='1'
//----Reduce: factor -> CON
push(1);
//----Reduce: term -> factor
//====LINE[   27]              i := i + 1
//++++Token: LineNo=28 Token=259 Lexeme='end'
//----Reduce: simexp -> simexp ADDOP term
binary(+);
//----Reduce: expr -> simexp
//----Reduce: elstmt -> vbl := expr
assign;
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*///----Reduce: stmt -> elstmt 
//----Reduce: stmts -> stmts ; stmt
//----Reduce: compstmt -> BEGIN stmts END
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*///----Reduce: elstmt -> compstmt
//----Reduce: stmt -> elstmt 
//----Reduce: stmt -> while expr do stmt
goto L4;
L5:
//----Reduce: stmts -> stmts ; stmt
//++++Token: LineNo=28 Token=261 Lexeme=';'
//====LINE[   28]           END;
//++++Token: LineNo=29 Token=270 Lexeme='writeln'
//++++Token: LineNo=29 Token=267 Lexeme='('
//++++Token: LineNo=29 Token=265 Lexeme='a'
//++++Token: LineNo=29 Token=271 Lexeme='/'
//----Reduce: vbl -> ID
push(3);//----Reduce: factor -> vbl 
deref;
//----Reduce: term -> factor
//++++Token: LineNo=29 Token=265 Lexeme='j'
//++++Token: LineNo=29 Token=268 Lexeme=')'
//----Reduce: vbl -> ID
push(1);//----Reduce: factor -> vbl 
deref;
//----Reduce: term -> term MULOP factor
binary(/);
//----Reduce: simexp -> term
//----Reduce: expr -> simexp
//----Reduce: exprlist -> expr
cout << pop << ' ';
//----Reduce: elstmt -> WRITELN ( exprlist )
cout << endl;
//----Reduce: stmt -> elstmt 
//----Reduce: stmts -> stmts ; stmt
//====LINE[   29]           writeln(a/j)
//++++Token: LineNo=30 Token=259 Lexeme='end'
//----Reduce: compstmt -> BEGIN stmts END
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*///----Reduce: elstmt -> compstmt
//----Reduce: stmt -> elstmt 
//====LINE[   30]        END
//++++Token: LineNo=31 Token=259 Lexeme='end'
//----Reduce: stmt -> IF expr THEN stmt
L3:
//----Reduce: stmts -> stmts ; stmt
//----Reduce: compstmt -> BEGIN stmts END
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*///----Reduce: body -> dclpart compstmt
//++++Token: LineNo=31 Token=264 Lexeme='.'
//----Reduce: pgm -> PROGRAM ID ; body .
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*///====LINE[   31]    END.
#include "stackmachine.epi"
//>>>>  End  Example Pascal Compiler <<<<
