//>>>> Begin Example Pascal Compiler <<<<
#include "stackmachine.pro"
//>>>> Controller::open_file()=prog3.p
//>>>> Starting parser via ScanParser()
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 0, [0:0], 0, , 2, 
prog3: 0, 0, [0:0], 0, , 1, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 0, [0:0], 0, , 2, 
j: 0, 0, [0:0], 0, , 3, 
prog3: 0, 0, [0:0], 0, , 1, 
*//*
$3dt = 1
Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
prog3: 0, 0, [0:0], 0, , 1, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
prog3: 0, 0, [0:0], 0, , 1, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
prog3: 0, 0, [0:0], 0, , 1, 
a: 0, 0, [0:0], 0, , 4, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
prog3: 0, 0, [0:0], 0, , 1, 
a: 0, 0, [0:0], 0, , 4, 
b: 0, 0, [0:0], 0, , 5, 
*//*
$3dt = -2
Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
prog3: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [1:10], 0, , 2, 
b: 0, 2, [1:10], 0, , 12, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
prog3: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [1:10], 0, , 2, 
b: 0, 2, [1:10], 0, , 12, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
prog3: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [1:10], 0, , 2, 
b: 0, 2, [1:10], 0, , 12, 
*/push(0);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
prog3: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [1:10], 0, , 2, 
b: 0, 2, [1:10], 0, , 12, 
*/push(123);
assign;
push(1);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
prog3: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [1:10], 0, , 2, 
b: 0, 2, [1:10], 0, , 12, 
*/push(3);
assign;
push(1);
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
prog3: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [1:10], 0, , 2, 
b: 0, 2, [1:10], 0, , 12, 
*/push(3.1);
assign;
push(2);
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
prog3: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [1:10], 0, , 2, 
b: 0, 2, [1:10], 0, , 12, 
*/push(1);
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
prog3: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [1:10], 0, , 2, 
b: 0, 2, [1:10], 0, , 12, 
*/deref;
push(2.0);
binary(/);
assign;
push(0);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
prog3: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [1:10], 0, , 2, 
b: 0, 2, [1:10], 0, , 12, 
*/deref;
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
prog3: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [1:10], 0, , 2, 
b: 0, 2, [1:10], 0, , 12, 
*/push(1);
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
prog3: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [1:10], 0, , 2, 
b: 0, 2, [1:10], 0, , 12, 
*/deref;
push(2);
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
prog3: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [1:10], 0, , 2, 
b: 0, 2, [1:10], 0, , 12, 
*/deref;
push(3.14);
binary(*);
binary(+);
assign;
push(0);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
prog3: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [1:10], 0, , 2, 
b: 0, 2, [1:10], 0, , 12, 
*/deref;
cout << pop << ' ';
cout << endl;
push(0);/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
prog3: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [1:10], 0, , 2, 
b: 0, 2, [1:10], 0, , 12, 
*/deref;
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
prog3: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [1:10], 0, , 2, 
b: 0, 2, [1:10], 0, , 12, 
*/deref;
cout << pop << ' ';
cout << endl;
/*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
prog3: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [1:10], 0, , 2, 
b: 0, 2, [1:10], 0, , 12, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
prog3: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [1:10], 0, , 2, 
b: 0, 2, [1:10], 0, , 12, 
*//*Var: SymType, DataType, [low:high], value, realvalue, address
i: 0, 1, [0:0], 0, , 0, 
j: 0, 1, [0:0], 0, , 1, 
prog3: 0, 0, [0:0], 0, , 1, 
a: 0, 2, [1:10], 0, , 2, 
b: 0, 2, [1:10], 0, , 12, 
*/#include "stackmachine.epi"
//>>>>  End  Example Pascal Compiler <<<<
