#include <stdio.h>
//더 많은 음식을 입력하고 받고 싶으시다면 파일에 입력하시면 됩니다.
int main(void)
{
FILE *fp;
int in_f;
int f;
char str[500+1];
fp = fopen("food.txt", "r");//파일 불러오기
printf("재료를 알려드립니다.\n");
printf("-----------메뉴-----------\n");
printf("| 1.스테이크              |\n");
printf("| 2.된장국                |\n");
printf("| 3.김치찌개              |\n");
printf("| 4.잔치국수              |\n");
printf("| 5.떡볶이                |\n");
printf("--------------------------\n");
printf("메뉴 번호를 입력하시오:");
scanf("%d", &in_f);
in_f++;
//파일에서 해당번호의 줄을 입력받아서 출력
f = 0;
while( fgets(str, sizeof(str), fp) != NULL)
{
    if(f==0)
    {
          printf("%s\n", str);
    }
              f++;
             if (f == in_f)
            {
               printf("%s\n", str);
            }
        }
    return 0;
}