#include <stdio.h>
double hei=0,bmi=0;
double wei=0;//�������� ����
double cal(){
	bmi=wei/(hei*hei);//�������� �־��� ���� �̿��Ͽ� ���
	printf("%lf\n",bmi);
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

int main(){
    
    printf("�����Ը� �Է��Ͻÿ�(kg):");
	scanf("%lf",&wei);
	printf("Ű�� �Է��Ͻÿ�(m):");
    scanf("%lf",&hei);
	cal();
	
    
    return 0; 
    } 



