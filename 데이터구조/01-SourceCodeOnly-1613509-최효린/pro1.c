#include <stdio.h>
#include <stdlib.h>
#define MAX 16

int Arrayin[MAX] = {96,4,26,49,75,103,43,42,21,7,15,97,13,11,8,48};

void printpro() {
   int i;
   printf("[");
	
   for(i = 0;i < MAX;i++) {
      printf("%d ", Arrayin[i]);
   }
	
   printf("]\n");
}
void linex(int count) {
   int i;
	
   for(i = 0;i < count-1;i++) {
      printf("<");
   }
	
   printf("<\n");
}

void SortArr()
{
    int i, j, lay,loe;
	int n=MAX;

    for (i = 0; i < n - 1; i++)
    {
        lay = i;
        for (j = i + 1; j < n; j++)
        {
            if (Arrayin[j] < Arrayin[lay])
            {
                lay = j;
				
            }
        }
        loe = Arrayin[lay];
        Arrayin[lay] = Arrayin[i];
        Arrayin[i] = loe;
		printpro();
    }
}

void main() {

   printf("첫 배열: ");
   printpro();
   linex(30);
   SortArr();
   printf("최종 배열: ");
   printpro();
   linex(30);
   system("pause");
}