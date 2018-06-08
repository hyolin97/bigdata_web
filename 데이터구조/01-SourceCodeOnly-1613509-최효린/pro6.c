#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int length=0;
struct circular
{
    int i;
    struct circular *front;
    struct circular *back;
};
struct circular *con;
struct circular *head;
struct circular *top;
struct circular *mid;
struct circular *move;
int cnt=0;
typedef struct linkedlist{
	char *data;
	struct linkedlist *link;
}linkedlist;
void back(char*warn){
	fprintf(stderr,"%s\n",warn);
	exit(1);

}
void creat()
{
    head=(struct circular *)malloc(sizeof(struct circular));
    head->back=head;
    head->front=head;
    printf("데이터를 입력하세요:");
    scanf("%d",&head->i);
    con=head;
    con->back=(struct circular *)malloc(sizeof(struct circular));
    con=con->back;
    con->back=head;
    head->front=con;    
    scanf("%d",&con->i);

}


void printli(){
	top=head;
    printf("%\nd-->",top->i);
    top=top->back;
    while(top!=head)
    {
        printf("\n%d-->",top->i);
        top=top->back;
    }
}
void addlt()
{
    int add,bu;

    printf("데이터를 입력하세요:%d",cnt);
    scanf("%d",&add);
    top=head;
    bu=1;
    while(bu<add)
    {
        top=top->back;
        bu++;
    }
    
    mid=(struct circular *)malloc(sizeof(struct circular));
    printf("\n데이터를 입력하세요:");
    scanf("%d",&mid->i);

    mid->back=top->back;
    top->back=mid;
    top->back->front=mid;
    mid->front=top;

}


linkedlist *gtnode(linkedlist *list, int nav){
	int i;
	linkedlist *poimnode=list;
	if (nav<0) return NULL;
	for(i=0;i<nav;i++) poimnode=poimnode->link;
	return poimnode;

}
void rem(linkedlist **phead,linkedlist *top,linkedlist *erase){
	if(top==NULL) *phead=(*phead)->link;
	else 
		top->link =erase->link;
	free(erase);
}
void del(void)
{
    int add,nu;

    scanf("%d",&add);
    top=head;
    nu=1;
    while(nu<add-1)
    {
        top=top->back;
        nu++;
    }
    
    mid=top->back;
    top->back=mid->back;
    mid->back->front=top;
    free(mid);
}

int main(void){
	int outputran=0,mid=0,number=0;
	linkedlist *name=NULL;
	linkedlist *ouhead=NULL;
	
	printli();
	printf("\n");
	outputran=rand()%38;
	
	printf("제비 뽑기 결과 뽑힌 번호:%d\n\n",outputran);
	
	if (outputran>=6){
		mid=outputran;
		for(mid;length>=3;mid +=outputran){
			printf(">>>>");
			ouhead=gtnode(name,mid+1);
			del();
			printli();
			printf("\n");
			name=ouhead;
			mid=0;
			}
		printf("탈출 명단\n>>>>");
	    printli();
	}
	else {
		mid=outputran;
		for(mid;length>=4;mid +=outputran){
			mid=mid%(outputran*4);
			printf(">>>>");
			ouhead=gtnode(name,mid+1);
			del();
			printli();
			printf("\n");
			name=ouhead;
			mid=0;
			}
		printf("탈출 명단 \n>>>>");
	    printli();
		
	
	}
	
	system("pause");
}