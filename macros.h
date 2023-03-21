// This is a set of macros to hide
// some of the details of implementing a stack based
// machine.
//  LKR 2010
// Assumes an array of double called 'mem[]' and top pointer 'top'

#define push(x)     mem[++top] = x

#define pop         mem[top--]

#define deref       mem[top] = mem[(int)mem[top]]

#define allocmem(n)   top += n

#define deallocmem(n) top -= n

#define assign      mem[(int)mem[top-1]] = mem[top]; top -= 2

#define unary(op)   mem[top] = op mem[top]

#define binary(op)  mem[top-1] = mem[top-1] op mem[top]; top--

#define intbinary(op)  mem[top-1] = (int)mem[top-1] op (int)mem[top]; top--

#define intunary(op)   mem[top] = op (int)mem[top]
