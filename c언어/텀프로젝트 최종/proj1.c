#include <stdio.h>
double hei=0,bmi=0;
double wei=0;//전역변수 선언
double cal(){
	bmi=wei/(hei*hei);//문제에서 주어진 식을 이용하여 계산
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
    
    printf("몸무게를 입력하시오(kg):");
	scanf("%lf",&wei);
	printf("키를 입력하시오(m):");
    scanf("%lf",&hei);
	cal();
	
    
    return 0; 
    } 



