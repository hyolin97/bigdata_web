#include <stdio.h>
#include <string.h>

char main()
{
	
	char* ingre1[4]={"��","��","��"};//char�� ������ �����Ͽ����� ��������� ����.
	
	char* ingre2[4]={"�Ұ��","�������","�߰��"};
	
	char* ingre3[7]={"����","����","����","��","����","��"};
	
	char* ingre4[4]={"������","����","��"};
	
	char* ingre5[5]={"����","������","�丶��ҽ�","ũ���ҽ�"};
	char intp1,intp2,intp3,intp4,intp5;
	
	char* inp1=&intp1;char* inp2=&intp2;char* inp3=&intp3;char* inp4=&intp4;char* inp5=&intp5;
	 int i=0;
	 //����ڷκ��� ��Ḧ �Է¹���.
  printf("�ȳ��ϼ���.\n"); 
  printf("�丮�ϰ� ���� ��Ḧ �Է��ϼ���.\n "); 
  printf("ù��° ���\n <(��,��,��)�߿��� ���ÿ�>:\n");
  scanf("%s",&intp1);
  printf("�ι�° ���\n<���: (�Ұ��, �������, �߰��)�߿��� ���ÿ�>:\n");
  scanf("%s",&intp2);
  printf("����° ���\n<��ä: (����,����,����,��,����,��)�߿��� ���ÿ�>:\n");
  scanf("%s",&intp3);
  printf("�׹�° ���\n<�ػ깰: (������,����,��)�߿��� ���ÿ�>:\n");
  scanf("%s",&intp4);
  printf("�ټ���° ���\n<�ҽ�: (����, ������, �丶��ҽ�, ũ���ҽ�)�߿��� ���ÿ�>:\n");
  scanf("%s",&intp5);

  for(i=0;i<=5;i++){
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[0])==0)
					  printf("���� ���ִ� ����:\n���屹�� \n ������ũ\n");
				  
  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[0])==0)
					  printf("���� ���ִ� ����:\n���屹��\n ������ũ\n");
  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[0])==0)
					  printf("���� ���ִ� ����:\n�Ұ�� ���屹\n ��������\n ����������\n ������ũ\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[0])==0)
					  printf("���� ���ִ� ����:\n��������\n ������ũ\n");
  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[0])==0)
					  printf("���� ���ִ� ����:\n���屹��\n ������ũ\n");
  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[0])==0)
					  printf("���� ���ִ� ����:\n������� ���屹\n ��������\n ����������\n ������ũ\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[0])==0)
					  printf("���� ���ִ� ����:\n�ߺ���\n ������ũ\n");
  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[0])==0)
					  printf("���� ���ִ� ����: \n���屹��\n �߱���\n����������\n ������ũ\n");
  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[0])==0)
					  printf("���� ���ִ� ����:\n������� ���屹\n ��������\n ������ũ\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[0])==0)
					  printf("���� ���ִ� ����:\n���屹�� \n ������ũ\n ���캺��\n");
  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[0])==0)
					  printf("���� ���ִ� ����:\n�Ұ�� ���屹��\n ���캺��\n ������ũ\n");
  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[0])==0)
					  printf("���� ���ִ� ����:\n�Ұ�� ���屹\n ������ũ\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[0])==0)
					  printf("���� ���ִ� ����:\n�����\n ����\n������ũ\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[0])==0)
					  printf("���� ���ִ� ����:\n�Ե��屹��\n����\n ������ũ\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[0])==0)
					  printf("���� ���ִ� ����:\n�Ե��屹\n ����\n������ũ\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("���� ���ִ� ����:\n�����\n ���Ұ��\n ������ũ\n");
  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("���� ���ִ� ����:\n�������\n ���Ұ��\n ������ũ\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("���� ���ִ� ����:\n�����\n ���Ұ��\n ������ũ\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("���� ���ִ� ����:\n�����\n ��������\n ������ũ\n");
  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("���� ���ִ� ����:\n�������\n ��������\n ������ũ\n");
  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("���� ���ִ� ����: \n���Ұ��\n ������ũ\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("���� ���ִ� ����: \n�߰���\n ������ũ\n");
  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("���� ���ִ� ����: \n�������\n�߰���\n ��Į����\n������ũ\n");
  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("���� ���ִ� ����: \n�߰���\n ��������\n������ũ\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("���� ���ִ� ����: \n�丶�丮����\n ��������\n������ũ\n");
  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("���� ���ִ� ����: \n���İ�Ƽ\n ��������\n������ũ\n");
  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("���� ���ִ� ����: \n��������\n������ũ\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("���� ���ִ� ����: \n�丶�丮����\n��������\n������ũ\n");
  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("���� ���ִ� ����: �丶�佺�İ�Ƽ\n��������\n������ũ\n");
  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("���� ���ִ� ����: \n��������\n������ũ\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("���� ���ִ� ����: \n�丶�丮����\n��������\n������ũ\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("���� ���ִ� ����: \n�丶�佺�İ�Ƽ\n��������\n������ũ\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("���� ���ִ� ����: \n��������\n������ũ\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \nũ��������\n��������\n������ũ\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \nũ�����İ�Ƽ\n��������\n������ũ\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \n��������\n������ũ\n");
   if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \nũ��������\n��������\n������ũ\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \nũ�����İ�Ƽ\n��������\n������ũ\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \n��������\n������ũ\n");
   if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \nũ��������\n��������\n������ũ\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����:\n ũ�����İ�Ƽ\n��������\n������ũ\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[0])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \n��������\n������ũ\n");
   if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \nũ��������\n���캺����\n������ũ\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \nũ�����İ�Ƽ\n���캺��\n������ũ\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \n���챹\n������ũ\n");
    if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \nũ��������\n���캺����\n������ũ\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \nũ�����İ�Ƽ\n������ũ\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \n���챹\n������ũ\n");
   if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \nũ��������\n���캺����\n������ũ\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \nũ�����İ�Ƽ\n������ũ\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \n���챹\n������ũ\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \nũ��������\n���캺����\n������ũ\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \nũ�����İ�Ƽ\n������ũ\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \n���챹\n������ũ\n");

  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \nũ��������\n���캺����\n������ũ\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \nũ�����İ�Ƽ\n���캺��\n������ũ\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \n���챹\n������ũ\n");
    if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("���� ���ִ� ����: \nũ��������\n���캺����\n������ũ\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("���� ���ִ� ����: \nũ�����İ�Ƽ\n������ũ\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("���� ���ִ� ����: \n���챹\n������ũ\n");
   if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("���� ���ִ� ����: \nũ��������\n���캺����\n������ũ\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("���� ���ִ� ����: \nũ�����İ�Ƽ\n������ũ\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("���� ���ִ� ����: \n���챹\n������ũ\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("���� ���ִ� ����: \nũ��������\n���캺����\n������ũ\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("���� ���ִ� ����: \nũ�����İ�Ƽ\n������ũ\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("���� ���ִ� ����: \n���챹\n������ũ\n");
    if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("���� ���ִ� ����:\n�����\n ���캺����\n���Ұ��\n ������ũ\n");
  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("���� ���ִ� ����:\n�������\n ���Ұ��\n ������ũ\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("���� ���ִ� ����:\n�����\n ���챹\n���Ұ��\n ������ũ\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("���� ���ִ� ����:\n�����\n ���캺����\n��������\n ������ũ\n");
  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("���� ���ִ� ����:\n�������\n ��������\n ������ũ\n");
  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("���� ���ִ� ����:\n ���Ұ��\n ���챹\n������ũ\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("���� ���ִ� ����: \n�߰���\n ���캺����\n������ũ\n");
  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("���� ���ִ� ����: \n�������\n�߰���\n ��Į����\n������ũ\n");
  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("���� ���ִ� ����: \n�߰���\n ���챹\n������ũ\n");
  
	  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \nũ��������\n�Ի캺����\n������ũ\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \nũ�����İ�Ƽ\n�Ի캺��\n������ũ\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \n�ɰԱ�\n������ũ\n");
    if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \nũ��������\n�Ժ�����\n������ũ\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \nũ�����İ�Ƽ\n������ũ\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����:\n �ɰԱ�\n������ũ\n");
   if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����:\n ũ��������\n�Ժ�����\n������ũ\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \nũ�����İ�Ƽ\n������ũ\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \n�ɰԱ�\n������ũ\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \nũ��������\n�Ժ�����\n������ũ\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \nũ�����İ�Ƽ\n������ũ\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \n�ɰԱ�\n������ũ\n");

  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \nũ��������\n�Ժ�����\n������ũ\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \nũ�����İ�Ƽ\n�ɰԺ���\n������ũ\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[3])==0)
					  printf("���� ���ִ� ����: \n�ɰԱ�\n������ũ\n");
    if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("���� ���ִ� ����: \nũ��������\n�Ի캺����\n������ũ\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("���� ���ִ� ����: \nũ�����İ�Ƽ\n������ũ\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("���� ���ִ� ����: \n�ɰԱ�\n������ũ\n");
   if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[1])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("���� ���ִ� ����: \nũ��������\n���캺����\n������ũ\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("���� ���ִ� ����: \nũ�����İ�Ƽ\n������ũ\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("���� ���ִ� ����: \n�ɰԱ�\n������ũ\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("���� ���ִ� ����: \nũ��������\n�Ի캺����\n������ũ\n");

  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("���� ���ִ� ����: \nũ�����İ�Ƽ\n������ũ\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[2])==0)
					  printf("���� ���ִ� ����: \n�ɰԱ�\n������ũ\n");
    if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("���� ���ִ� ����:\n�����\n �Ի캺����\n���Ұ��\n ������ũ\n");
  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("���� ���ִ� ����:\n�������\n ���Ұ��\n ������ũ\n");

  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[0])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("���� ���ִ� ����:\n�����\n �ɰԱ�\n���Ұ��\n ������ũ\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("���� ���ִ� ����:\n�����\n �Ի캺����\n��������\n ������ũ\n");
  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("���� ���ִ� ����:\n�������\n ��������\n ������ũ\n");
  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[1])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("���� ���ִ� ����: \n���Ұ��\n �ɰԱ�\n������ũ\n");
  if(strcmp(inp1,ingre1[0])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("���� ���ִ� ����: \n�߰���\n �Ի캺����\n������ũ\n");
  if(strcmp(inp1,ingre1[1])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("���� ���ִ� ����: \n�������\n�߰���\n ��Į����\n������ũ\n");
  if(strcmp(inp1,ingre1[2])==0)
	  if(strcmp(inp2,ingre2[2])==0)
		  if(strcmp(inp3,ingre3[i])==0)
			  if(strcmp(inp4,ingre4[2])==0)
				  if(strcmp(inp5,ingre5[1])==0)
					  printf("���� ���ִ� ����: \n�߰���\n �ɰԱ�\n������ũ\n");
  






  
	  

   
  }
  return 0;
}