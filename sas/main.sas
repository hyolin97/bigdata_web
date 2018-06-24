
LIBNAME mydata "C:\�������\HW";
DATA mydata.bank;
INFILE 'C:\�������\HW\hw3data.txt';
INPUT #7 principal YEN12. rate PERCENT.  y;
%include "C:\�������\HW\sub.sas";
TITLE1 '<Principal(��ȯ�� ����) = ��õ��鸸��>';
TITLE2 '    Rate(������)=5.4(����:%)';
TITLE3 '    Y(��ȯ�Ⱓ)=2(����:��) ';
RUN;
ODS PDF FILE="C:\�������\HW\results.pdf";
PROC PRINT DATA=mydata.mon LABEL SPLIT='*';
FORMAT year_princ cum_princ year_int balance year_total mon1_int YEN12. mon2_int YEN12. mon3_int YEN12. mon4_int YEN12.
mon5_int YEN12. mon6_int YEN12. mon7_int YEN12. mon8_int YEN12. mon9_int YEN12. mon10_int YEN12. mon11_int YEN12. mon12_int YEN12.
 mon1_total YEN12. mon2_total YEN12. mon3_total YEN12. mon4_total YEN12. mon5_total YEN12. mon6_total YEN12. mon7_total YEN12.
mon8_total YEN12. mon9_total YEN12. mon10_total YEN12. mon11_total YEN12.  mon12_total YEN12.;


LABEL cum_princ='�ų� * ��ȯ�� * ��������';
LABEL cum_int='�ų� * ������ * ��������';
ID year;

VAR year_princ year_int year_total balance cum_princ cum_int mon1_int mon2_int mon3_int mon4_int mon5_int
mon6_int mon7_int mon8_int mon9_int mon10_int mon11_int mon12_int mon1_total mon2_total mon3_total mon4_total mon5_total
mon6_total mon7_total mon8_total mon9_total mon10_total mon11_total mon12_total;


RUN;
ODS PDF CLOSE;
