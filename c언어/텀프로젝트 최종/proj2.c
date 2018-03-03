#include <stdio.h>
#define DAY 29//메크로상수를 정의하여 원하는 일 수 만큼 칼로리계산이 가능하게함.
struct CAL {
 
 char foo[30];
 double foocaloire;
};
struct CAL s[30];
 double cali = 0; 
 double calo= 0;
 double calorie = 0;
 double calorietotal = 0;
 double weight = 0;
 int menu = 0;
 double g;
 double gain=0,lose=0,trans=0;
 int i = 0;
 double hei=0,bmi=0;
 char one(){
	 for (i=0;i<=DAY;i++)
  {
	  printf("\n----먹은음식----\n");
   
   printf("먹은음식를 적으시오:\n");
   scanf("%s", s[i].foo);
  
   printf("먹은음식은%s입니다\n", &s[i].foo);
   fflush(stdin);
   printf("칼로리 입력하세요:");
   scanf("%lf",&s[i].foocaloire);
   printf("등록한 메뉴의 칼로리는%lf입니다.",s[i].foocaloire);}
   
 }
 char five(){
	 trans=gain-lose;
	  printf(" 한달동안 몸무게변화:%lf",trans);
	  printf(" 현재 몸무게 : %lfkg \n", weight);
	  if(trans>0)
	  { printf("살이 쪘습니다.");}
	  else if(trans=0)
	  {printf("몸무게가 그대로입니다.");}
	  else 
	  {
		  printf(" 살이 빠졌습니다.");
	  }
 }
int main()
{
 
 printf("   몸무게가 찔까요 빠질까요?    \n");
 printf("자신의 몸무게를 입력하시오(kg):\n");
 scanf("%lf", &weight);
 printf("자신의 키를 입력하시오(m):\n");
 scanf("%lf",&hei);
 printf("입력되었습니다.\n");
 printf("\n 현재 몸무게 : %4.2lf kg \n", weight);
 while (1)
 {

  printf("    칼로리계산기    \n");
  printf(" ---------메뉴얼----------\n");
  printf("ㅣ1.먹은 음식            ㅣ\n");
  printf("ㅣ2.한달칼로리섭취량     ㅣ\n");
  printf("ㅣ3.한달칼로리소모량     ㅣ\n");
  printf("ㅣ4.결과보기             ㅣ\n");
  printf("ㅣ5.한달 동안 몸무게 변화ㅣ\n");
  printf(" -------------------------\n");
  printf("사용할 메뉴얼번호를 입력하세요\n(1번부터 순차적으로 입력하세요):\n");
  scanf("%d", &menu);

  if (menu == 1)//하루동안 먹은 음식과 그 음식의 g당 칼로리를 입력받음.
  {
   one();
   printf("다음 메뉴얼를 골라주세요\n");
   fflush(stdin);}
  
  if (menu == 2)//먹은 음식양을 입력받아 총칼로리량계산
  {
   for(i=0;i<=DAY;i++)
   {printf("섭취한 칼로리메뉴는'%s'이며,섭취  칼로리는 '%lf'입니다\n", &s[i].foo,s[i].foocaloire);
 
   printf("음식 섭취량:(g 단위)\n ");
   scanf("%lf", &g);
   
   cali = (cali+(g * s[i].foocaloire)/100);}
  
   printf(" 총 칼로리 섭취량 : %lf kcal \n",cali);
   gain=(cali * 0.0001298701);
   weight = weight + (cali * 0.0001298701 );
   printf(" 현재 몸무게 : %lf kg \n", weight);
   
  

  }
  if (menu == 3)//칼로리 소모량을 입력받음.
  {
	  printf("칼로리 소모량을 쓰시오:\n");
	  scanf("%lf",&calo);
	  lose=(calo* 0.0001298701 );
	  weight=weight-(calo* 0.0001298701);
	  
  }
  if(menu==4)//1번문제를 활용하여 비만정도를 출력
  {
	 bmi=weight/(hei*hei);
	 //printf("%lf",bmi);
    if(bmi<18.5)
		printf("UNDERWEIGHT\n");
	else if(bmi>=18.5)
		if(bmi<25)
			printf("NORMAL\n");
	else if(bmi>=25)
		if(bmi<30)
			printf("OVERWEIGHT\n");
	else
		printf("OBESE\n");
  }
  if(menu==5)//몸무게의 변화를 출력
  {
	  
	  five();
	  return 0;
  }
    
 
  
 }
  
 }