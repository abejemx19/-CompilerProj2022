program prog3;
var
   i,j:Integer;
   a,b:array [1..10] of Real;
begin
    i := 123;
    j := 3;
    a[1] := 3.1;
    a[2] := a[1]/2.0;
    a[i] := a[1]+a[2]*3.14; 
    writeln(i);
    writeln(a[i])
end.
