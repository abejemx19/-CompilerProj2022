!Edited by Ryo and Miki

        PROGRAM MAIN
        INTEGER, PARAMETER :: MAXSIZE=99
        REAL:: A(MAXSIZE)
        DO WHILE(.TRUE.)
10      READ (5,100,END=999) K
100     FORMAT(I5)

        IF (K .LE. 0 .OR. K .GT. MAXSIZE) GOTO 999
        READ *,(A(I), I=1,K)
        PRINT '(''The numbers are''/(4f6.2))',(A(I),I=1,K)
        SUMITT = SUMIT(A,K)
        AVGIT = SUMITT/K
        WRITE(*,20) SUMITT
        WRITE(*,21) AVGIT
        PRINT '(''The numbers greater than Avg are'')'
        DO I=1, K
        IF(A(I) .GT. AVGIT) THEN
          WRITE(*,*) A(I)
        END IF
        END DO
20      FORMAT(' Sum=',F10.2)
21      FORMAT(' Avg=',F10.2)
        END DO !GO TO 10

999     PRINT *,'All done'
        STOP
        END

!C Summation function subprogram
        REAL FUNCTION SUMIT(V,N)
        REAL V(*)
        SUM = 0.0
        DO 20 I=1, N
          SUM = SUM + V(I)
20      CONTINUE
        SUMIT = SUM
        RETURN
        END

