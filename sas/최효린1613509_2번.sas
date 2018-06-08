

LIBNAME mydata "C:\전산통계\HW";

DATA mydata.one;
FILE PRINT;


DO i=2 TO 9;
    DO k=1 TO 9;

    m=i*k;
   PUT I "X" K "=" M;
   OUTPUT;

   END;
   PUT 20*'=';


END;
RUN;



PROC DATA=mydata.one;


RUN;
