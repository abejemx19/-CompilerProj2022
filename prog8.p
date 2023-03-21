PROGRAM TestF;	{This is a good sample program} {LKR}
VAR
    I,J:  Integer;
    A  :  ARRAY [1..10] of REAL;

PROCEDURE FOO(I:REAL;);
VAR
   K:REAL;
   PROCEDURE WRITER(I:Real;);
   BEGIN
	WRITE(I) 
   END;
BEGIN
    K := I/J*10;
    WRITER(K)
END;

FUNCTION Chooser(j:integer;):Integer;
BEGIN
   IF j<5
	THEN A[j] := j
	ELSE A[j] := j+5;
    Chooser := A[j]
END;

BEGIN  {main program}
    J := 10;
    I :=1;
    WHILE I<=J DO
	BEGIN
	FOO(Chooser(I));
	write(a[i]);
	WRITE( I );
	I := I+1
	END
END.	{end main}
