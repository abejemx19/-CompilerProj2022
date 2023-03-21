#include "stackmachine.pro"
   allocmem(4);
   push(5);
   push(4.9);
   push(3);
   cout << "popping "<<pop<<endl;
   binary(*);
   unary((int));
   cout << "mult result "<<pop<<endl;
   push(0);
   push(15);
   assign;
   push(1);
   push(26);
   assign;
   push(2);
   push(0);
   deref;
   push(1);
   deref;
   binary(-);
   cout << "reference and assign test should be -11 = "<<pop<<endl;
#include "stackmachine.epi"
