//>>>> Begin Example Pascal Compiler <<<<
#include "stackmachine.pro"
//>>>> Controller::open_file()=prog2.p
//>>>> Starting parser via ScanParser()
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 0, [0:0], 0, , 2, 
sample: 0, 0, [0:0], 0, , 1, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 0, [0:0], 0, , 2, 
j: 0, 0, [0:0], 0, , 3, 
sample: 0, 0, [0:0], 0, , 1, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 0, [0:0], 0, , 2, 
j: 0, 0, [0:0], 0, , 3, 
k: 0, 0, [0:0], 0, , 4, 
sample: 0, 0, [0:0], 0, , 1, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 0, [0:0], 0, , 2, 
j: 0, 0, [0:0], 0, , 3, 
k: 0, 0, [0:0], 0, , 4, 
m: 0, 0, [0:0], 0, , 5, 
sample: 0, 0, [0:0], 0, , 1, 
*//*
$3dt = 1
Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [0:0], 0, , 3, 
sample: 0, 0, [0:0], 0, , 1, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [0:0], 0, , 3, 
sample: 0, 0, [0:0], 0, , 1, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [0:0], 0, , 3, 
sample: 0, 0, [0:0], 0, , 1, 
a: 0, 0, [0:0], 0, , 6, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [0:0], 0, , 3, 
sample: 0, 0, [0:0], 0, , 1, 
a: 0, 0, [0:0], 0, , 6, 
b: 0, 0, [0:0], 0, , 7, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [0:0], 0, , 3, 
sample: 0, 0, [0:0], 0, , 1, 
a: 0, 0, [0:0], 0, , 6, 
b: 0, 0, [0:0], 0, , 7, 
c: 0, 0, [0:0], 0, , 8, 
*//*
$3dt = 2
Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [0:0], 0, , 3, 
sample: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 4, 
b: 0, 2, [0:0], 0, , 5, 
c: 0, 2, [0:0], 0, , 6, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [0:0], 0, , 3, 
sample: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 4, 
b: 0, 2, [0:0], 0, , 5, 
c: 0, 2, [0:0], 0, , 6, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [0:0], 0, , 3, 
sample: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 4, 
b: 0, 2, [0:0], 0, , 5, 
c: 0, 2, [0:0], 0, , 6, 
*/push(0);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [0:0], 0, , 3, 
sample: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 4, 
b: 0, 2, [0:0], 0, , 5, 
c: 0, 2, [0:0], 0, , 6, 
*/push(123);
assign;
push(1);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [0:0], 0, , 3, 
sample: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 4, 
b: 0, 2, [0:0], 0, , 5, 
c: 0, 2, [0:0], 0, , 6, 
*/push(0);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [0:0], 0, , 3, 
sample: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 4, 
b: 0, 2, [0:0], 0, , 5, 
c: 0, 2, [0:0], 0, , 6, 
*/deref;
push(345);
binary(+);
assign;
push(6);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [0:0], 0, , 3, 
sample: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 4, 
b: 0, 2, [0:0], 0, , 5, 
c: 0, 2, [0:0], 0, , 6, 
*/cin >> reg; push(reg); assign;
push(4);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [0:0], 0, , 3, 
sample: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 4, 
b: 0, 2, [0:0], 0, , 5, 
c: 0, 2, [0:0], 0, , 6, 
*/push(6);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [0:0], 0, , 3, 
sample: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 4, 
b: 0, 2, [0:0], 0, , 5, 
c: 0, 2, [0:0], 0, , 6, 
*/deref;
assign;
push(5);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [0:0], 0, , 3, 
sample: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 4, 
b: 0, 2, [0:0], 0, , 5, 
c: 0, 2, [0:0], 0, , 6, 
*/push(4);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [0:0], 0, , 3, 
sample: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 4, 
b: 0, 2, [0:0], 0, , 5, 
c: 0, 2, [0:0], 0, , 6, 
*/deref;
push(123);
binary(-);
assign;
push(1);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [0:0], 0, , 3, 
sample: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 4, 
b: 0, 2, [0:0], 0, , 5, 
c: 0, 2, [0:0], 0, , 6, 
*/deref;
cout << pop << ' ';
cout << endl;
push(5);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [0:0], 0, , 3, 
sample: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 4, 
b: 0, 2, [0:0], 0, , 5, 
c: 0, 2, [0:0], 0, , 6, 
*/deref;
cout << pop << ' ';
cout << endl;
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [0:0], 0, , 3, 
sample: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 4, 
b: 0, 2, [0:0], 0, , 5, 
c: 0, 2, [0:0], 0, , 6, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [0:0], 0, , 3, 
sample: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 4, 
b: 0, 2, [0:0], 0, , 5, 
c: 0, 2, [0:0], 0, , 6, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
k: 0, 1, [0:0], 0, , 2, 
m: 0, 1, [0:0], 0, , 3, 
sample: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [0:0], 0, , 4, 
b: 0, 2, [0:0], 0, , 5, 
c: 0, 2, [0:0], 0, , 6, 
*/#include "stackmachine.epi"
//>>>>  End  Example Pascal Compiler <<<<
