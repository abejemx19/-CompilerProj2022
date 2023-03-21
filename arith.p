program arith;
{ syntax errors are not intentional}
VAR
    i,j,k: integer;
    a,b,c: real;
    m: array [2..10] of integer;
BEGIN
    i := 13;
    j := i;
    k := j+1;
    writeln(k);
    j := k*2;
    k := i+j*5;
    j := 10*(i-3) mod 7;
    write(i);
    write(j);
    writeln(k);
    a := 3.14;
    b := a + i;
    c := a*(b/2);
    writeln(a,b,c);
    read(i,j);
    i := j*2;
	writeln(i,j);
    readln(k);
    write(k+i)
END.
