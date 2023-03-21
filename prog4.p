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
    j := k*2;
    k := i+j*5;
    j := 10*(i-3) mod 7;
    write(i);
    write(j);
    writeln(k);
    a := 3.14;
    b := a + i;
    c := a*(b/2);
    write(a);
    write(b);
    writeln(c);
    m[1] := i;
    i :=4;
    m[i] := j;
    m[i+1] := m[i]+m[1];
    write(m[i]);
    writeln(m[i+1])
END.
