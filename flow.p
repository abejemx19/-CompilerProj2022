program flow;
VAR
    i,j,k: integer;
    a,b,c: real;
    m: array [1..10] of integer;
BEGIN
    i := 1;
    read(k);
    j := 0;
    WHILE (k <> 0) and (i < 11) DO
    BEGIN
       m[i] := k;
       i := i+1;
       read(k)
    END;
    j := i-1;
    IF j<>0  THEN 
    BEGIN
       writeln(j);
       i := 0;
       a := 0.0;
       WHILE(i<=j) DO
       BEGIN
          IF m[i]<0 THEN m[i] := -m[i];
          writeln(m[i]);
          a := a + m[i];
          i := i + 1
       END;
       writeln(a/j)
    END
END.
