#include <stdio.h>
//�� ���� ������ �Է��ϰ� �ް� �����ôٸ� ���Ͽ� �Է��Ͻø� �˴ϴ�.
int main(void)
{
FILE *fp;
int in_f;
int f;
char str[500+1];
fp = fopen("food.txt", "r");//���� �ҷ�����
printf("��Ḧ �˷��帳�ϴ�.\n");
printf("-----------�޴�-----------\n");
printf("| 1.������ũ              |\n");
printf("| 2.���屹                |\n");
printf("| 3.��ġ�              |\n");
printf("| 4.��ġ����              |\n");
printf("| 5.������                |\n");
printf("--------------------------\n");
printf("�޴� ��ȣ�� �Է��Ͻÿ�:");
scanf("%d", &in_f);
in_f++;
//���Ͽ��� �ش��ȣ�� ���� �Է¹޾Ƽ� ���
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