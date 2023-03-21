//>>>> Begin Example Pascal Compiler <<<<
#include "stackmachine.pro"
//>>>> Controller::open_file()=prog5.p
//>>>> Starting parser via ScanParser()
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 0, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 0, [0:0], 0, , 2, 
j: 0, 0, [0:0], 0, , 3, 
flow: 0, 0, [0:0], 0, , 1, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 0, [0:0], 0, , 2, 
j: 0, 0, [0:0], 0, , 3, 
k: 0, 0, [0:0], 0, , 4, 
flow: 0, 0, [0:0], 0, , 1, 
*//*
$3dt = 1
Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
a: 0, 0, [0:0], 0, , 5, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
a: 0, 0, [0:0], 0, , 5, 
b: 0, 0, [0:0], 0, , 6, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
a: 0, 0, [0:0], 0, , 5, 
b: 0, 0, [0:0], 0, , 6, 
c: 0, 0, [0:0], 0, , 7, 
*//*
$3dt = 2
Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 0, [0:0], 0, , 8, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*//*
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
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/push(0);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/push(1);
assign;
push(2);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/cin >> reg; push(reg); assign;
push(1);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/push(0);
assign;
push(2);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
push(0);
push(0);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
push(11);
intbinary(&);
push(0);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/push(2);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
assign;
push(0);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/push(0);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
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
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/cin >> reg; push(reg); assign;
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/push(1);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/push(0);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
push(1);
binary(-);
assign;
push(1);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
push(0);
if(!pop) goto L0;
push(1);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
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
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/push(0);
assign;
push(3);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/push(0.0);
assign;
push(0);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
push(1);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
push(0);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
push(0);
if(!pop) goto L1;
push(0);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/push(0);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
assign;
push(0);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
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
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/push(3);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
push(0);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
binary(+);
assign;
push(0);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/push(0);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
push(1);
binary(+);
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
*/push(3);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
push(1);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/deref;
binary(/);
cout << pop << ' ';
cout << endl;
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
flow: 0, 0, [0:0], 0, , 1, 
m: 0, 1, [1:10], 0, , 6, 
a: 0, 2, [0:0], 0, , 3, 
b: 0, 2, [0:0], 0, , 4, 
c: 0, 2, [0:0], 0, , 5, 
*/#include "stackmachine.epi"
//>>>>  End  Example Pascal Compiler <<<<
