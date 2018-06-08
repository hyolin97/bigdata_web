#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <Windows.h>
#define MAX 20
#define CHANGE(x,y,t)((t)=(x),(x)=(y),(y)=(t))
int bin(int arr[],int find, int left, int right){
	int middle;
	while (left<=right){
		middle=(right+left)/2;
		switch (comp (arr[middle],find)){
		case 1:left=middle+1; printf("현재 middle은 %d입니다.오른쪽으로 이동합니다\n",middle);break;
		case 0:return middle;
		case -1:right=middle-1;printf("현재 middle은 %d입니다.왼쪽으로 이동합니다\n",middle);

		}

	}
	return 2;
}
void sortAY(int arr[],int n){
	int i,les,con,j;
	for(i=0;i<n;i++){
		les=i;
		for(j=i+1;j<n;j++)
			if (arr[j] <arr[les])
				les=j;
		CHANGE(arr[i],arr[les],con);
	}

}
int comp(int m,int n){
	if(m<n) return 1;
	else if(m==n) return 0;
	else return -1;
}

void main(void){
	int i,n,find,right;	
	int arrli[MAX];
	int left=0;
	int arr[MAX]={4,7,8,11,13,15,21,26,42,43,49,48,75,96,97,103};
	printf("input하고 싶은 숫자의 수를 입력하세요:");
	scanf("%d",&n);
	if(n<1||n>MAX){
		fprintf(stderr,"다시입력하세요.\n");
		exit(1);
	}
	sortAY(arr,n);
	printf("\n배열: \n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
		arrli[i]=arr[i];
	}
	right=n-1;
	printf("\n원하는 수를 입력하세요:");
	scanf("%d",&find);
	i=bin(arrli,find,left, right);
	if(i != 2)
		printf("%d는 list의 %d번째에 있습니다.\n",find,i+1);
	else
		printf("숫자가 없습니다.");
	
	system("pause");
}