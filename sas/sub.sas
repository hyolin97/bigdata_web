LIBNAME mydata "C:\전산통계\HW";

DATA mydata.mon;
SET mydata.bank;
ARRAY mon_int{12} mon1_int mon2_int mon3_int mon4_int mon5_int mon6_int mon7_int mon8_int mon9_int mon10_int mon11_int mon12_int;

ARRAY mon_total{12} mon1_total mon2_total mon3_total mon4_total mon5_total mon6_total mon7_total mon8_total mon9_total mon10_total
mon11_total mon12_total ;
RETAIN cum_int 0;
balance=24000000;

year_princ=(principal/2);
DO year=1 TO 2 ;
 cum_princ=(principal/24)*12*year;

DO i=1 TO 12;

mon_int{i}=(principal-(principal/24)*(i-1+12*(year-1)))*rate/12;
mon_total{i}=(mon_int{i}+(year_princ/12));
year_int=SUM(OF mon_int{*});
balance=balance-(year_princ/12);


END;

year_total=year_princ+year_int;
cum_int=cum_int+year_int;
output;
END;
RUN;
