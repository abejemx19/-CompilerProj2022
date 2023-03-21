PROGRAM Test1;	{This is a good sample program} {LKR}
VAR
    I,J:  Integer;
    A  :  ARRAY [1..20] of REAL;

PROCEDURE Foo(X: Real;);
BEGIN
    I := I+1;
    Writeln(X)
END;

BEGIN  {main program}
    READ(j);
    I :=1;
    WHILE I<=J DO
	BEGIN
	    Read(A[i]);
	    Foo(A[i]/I *J+100.0)
	END
END.	{end main}
