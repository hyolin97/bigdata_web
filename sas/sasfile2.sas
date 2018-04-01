
LIBNAME mydata 'C:\전산통계\HW';
DATA rawdata;

 INFILE "C:\전산통계\HW\HW1_data.txt";
 INPUT major $ ID name $ exam1 exam2 exam3 final;

RUN;

DATA mydata.total(keep= paf total firstname lastname );


  SET rawdata;
  total=exam1+exam2+exam3+final;
IF total<60 THEN PAF="FAIL";
ELSE PAF="PASS";


firstname=SUBSTR(name,1,2);
lastname=SUBSTR(name,2,4);


RUN;
PROC SORT DATA=mydata.total;BY total;
RUN;


PROC PRINT DATA=mydata.total ;  RUN;


PROC EXPORT DATA=mydata.total
            OUTFILE="C:\전산통계\HW\grade.txt"
            DBMS=TEXT REPLACE;
RUN;
