#include <stdio.h>
#define DAY 29//��ũ�λ���� �����Ͽ� ���ϴ� �� �� ��ŭ Į�θ������ �����ϰ���.
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
	  printf("\n----��������----\n");
   
   printf("�������ĸ� �����ÿ�:\n");
   scanf("%s", s[i].foo);
  
   printf("����������%s�Դϴ�\n", &s[i].foo);
   fflush(stdin);
   printf("Į�θ� �Է��ϼ���:");
   scanf("%lf",&s[i].foocaloire);
   printf("����� �޴��� Į�θ���%lf�Դϴ�.",s[i].foocaloire);}
   
 }
 char five(){
	 trans=gain-lose;
	  printf(" �Ѵ޵��� �����Ժ�ȭ:%lf",trans);
	  printf(" ���� ������ : %lfkg \n", weight);
	  if(trans>0)
	  { printf("���� �Ƚ��ϴ�.");}
	  else if(trans=0)
	  {printf("�����԰� �״���Դϴ�.");}
	  else 
	  {
		  printf(" ���� �������ϴ�.");
	  }
 }
int main()
{
 
 printf("   �����԰� ���� �������?    \n");
 printf("�ڽ��� �����Ը� �Է��Ͻÿ�(kg):\n");
 scanf("%lf", &weight);
 printf("�ڽ��� Ű�� �Է��Ͻÿ�(m):\n");
 scanf("%lf",&hei);
 printf("�ԷµǾ����ϴ�.\n");
 printf("\n ���� ������ : %4.2lf kg \n", weight);
 while (1)
 {

  printf("    Į�θ�����    \n");
  printf(" ---------�޴���----------\n");
  printf("��1.���� ����            ��\n");
  printf("��2.�Ѵ�Į�θ����뷮     ��\n");
  printf("��3.�Ѵ�Į�θ��Ҹ�     ��\n");
  printf("��4.�������             ��\n");
  printf("��5.�Ѵ� ���� ������ ��ȭ��\n");
  printf(" -------------------------\n");
  printf("����� �޴����ȣ�� �Է��ϼ���\n(1������ ���������� �Է��ϼ���):\n");
  scanf("%d", &menu);

  if (menu == 1)//�Ϸ絿�� ���� ���İ� �� ������ g�� Į�θ��� �Է¹���.
  {
   one();
   printf("���� �޴��� ����ּ���\n");
   fflush(stdin);}
  
  if (menu == 2)//���� ���ľ��� �Է¹޾� ��Į�θ������
  {
   for(i=0;i<=DAY;i++)
   {printf("������ Į�θ��޴���'%s'�̸�,����  Į�θ��� '%lf'�Դϴ�\n", &s[i].foo,s[i].foocaloire);
 
   printf("���� ���뷮:(g ����)\n ");
   scanf("%lf", &g);
   
   cali = (cali+(g * s[i].foocaloire)/100);}
  
   printf(" �� Į�θ� ���뷮 : %lf kcal \n",cali);
   gain=(cali * 0.0001298701);
   weight = weight + (cali * 0.0001298701 );
   printf(" ���� ������ : %lf kg \n", weight);
   
  

  }
  if (menu == 3)//Į�θ� �Ҹ��� �Է¹���.
  {
	  printf("Į�θ� �Ҹ��� ���ÿ�:\n");
	  scanf("%lf",&calo);
	  lose=(calo* 0.0001298701 );
	  weight=weight-(calo* 0.0001298701);
	  
  }
  if(menu==4)//1�������� Ȱ���Ͽ� �������� ���
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
  if(menu==5)//�������� ��ȭ�� ���
  {
	  
	  five();
	  return 0;
  }
    
 
  
 }
  
 }