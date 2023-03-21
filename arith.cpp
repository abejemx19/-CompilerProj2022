//>>>> Begin Example Pascal Compiler <<<<
#include "stackmachine.pro"
//>>>> Controller::open_file()=arith.p
//>>>> Starting parser via ScanParser()
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 0, [0:0], 0, , 2, 
arith: 0, 0, [0:0], 0, , 1, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 0, [0:0], 0, , 2, 
j: 0, 0, [0:0], 0, , 3, 
arith: 0, 0, [0:0], 0, , 1, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 0, [0:0], 0, , 2, 
j: 0, 0, [0:0], 0, , 3, 
k: 0, 0, [0:0], 0, , 4, 
arith: 0, 0, [0:0], 0, , 1, 
*//*
$3dt = 1
Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
arith: 0, 0, [0:0], 0, , 1, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
arith: 0, 0, [0:0], 0, , 1, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 0, [0:0], 0, , 5, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 0, [0:0], 0, , 5, 
b: 0, 0, [0:0], 0, , 6, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 0, [0:0], 0, , 5, 
b: 0, 0, [0:0], 0, , 6, 
c: 0, 0, [0:0], 0, , 7, 
*//*
$3dt = 2
Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 0, [0:0], 0, , 8, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*//*
$3dt = -1
Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/push(0);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/push(13);
assign;
push(1);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/push(0);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
assign;
push(2);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/push(1);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
push(1);
binary(+);
assign;
push(2);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
cout << pop << ' ';
cout << endl;
push(1);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/push(2);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
push(2);
binary(*);
assign;
push(2);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/push(0);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
push(1);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
push(5);
binary(*);
binary(+);
assign;
push(1);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/push(10);
push(0);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
push(3);
binary(-);
binary(*);
push(7);
intbinary(%);
assign;
push(0);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
cout << pop << ' ';
cout << endl;
push(1);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
cout << pop << ' ';
cout << endl;
push(2);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
cout << pop << ' ';
cout << endl;
push(3);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/push(3.14);
assign;
push(4);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/push(3);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
push(0);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
binary(+);
assign;
push(5);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/push(3);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
push(4);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
push(2);
binary(/);
binary(*);
assign;
push(3);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
cout << pop << ' ';
push(4);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
cout << pop << ' ';
push(5);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
cout << pop << ' ';
cout << endl;
push(0);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/push(1);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/cin >> reg; push(reg); assign;
push(0);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/push(1);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
push(2);
binary(*);
assign;
push(0);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
cout << pop << ' ';
push(1);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
cout << pop << ' ';
cout << endl;
push(2);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/cin >> reg; push(reg); assign;
push(2);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
push(0);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
binary(+);
cout << pop << ' ';
cout << endl;
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [2:10], 0, , 6, 
arith: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/#include "stackmachine.epi"
//>>>>  End  Example Pascal Compiler <<<<
