#include <stdio.h>
#include <stdlib.h>
int length=0;
typedef struct linkedlist{
	char *data;
	struct linkedlist *link;

}linkedlist;

void back(char*warn){
	fprintf(stderr,"%s\n",warn);
	exit(1);

}
linkedlist *creat(char*mem,linkedlist *nub){
	linkedlist *nupnode;
	nupnode=(linkedlist*)malloc(sizeof(linkedlist));
	if(nupnode==NULL) back("�����Դϴ�.");
	nupnode->data=mem;
	nupnode->link=nub;
	length++;
	return(nupnode);
} 


void printli(linkedlist *head){
	linkedlist *cu;
	if(head==NULL) return;
	cu=head;
	do{
		
		printf("%s",cu->link->data);
		cu=cu->link;
	}while (cu!=head);
	
	printf("\n");
}
void addlt(linkedlist **phed,linkedlist *node){
	if(*phed ==NULL){
		*phed=node;
		node->link=node;
	}
	else{
		node->link=(*phed)->link;
		(*phed)->link=node;
		*phed=node;

	}
	
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
void del(linkedlist *list,int nav){
	linkedlist*remove=gtnode(list,nav);
	linkedlist *p=gtnode(list,nav-1);	
	rem(&(list),p,remove);
	length--;
}
int main(void){
	int outputran=0,mid=0,number=0;
	linkedlist *name=NULL;
	linkedlist *ouhead=NULL;
	addlt(&name,creat("1.ȿ��",NULL));
	addlt(&name,creat("2.�α�",NULL));
	addlt(&name,creat("3.����",NULL));
	addlt(&name,creat("4.����",NULL));
	addlt(&name,creat("5.����",NULL));
	addlt(&name,creat("6.����",NULL));
	addlt(&name,creat("7.����",NULL));
	addlt(&name,creat("8.�ֿ�",NULL));
	addlt(&name,creat("9.����",NULL));
	addlt(&name,creat("10.����",NULL));
	addlt(&name,creat("11.���",NULL));
	addlt(&name,creat("12.����",NULL));
	addlt(&name,creat("13.����",NULL));
	addlt(&name,creat("14.����",NULL));
	addlt(&name,creat("15.����",NULL));
	addlt(&name,creat("16.ä��",NULL));
	addlt(&name,creat("17.�ض�",NULL));
	addlt(&name,creat("18.����",NULL));
	addlt(&name,creat("19.â��",NULL));
	addlt(&name,creat("20.�ǿ�",NULL));
	addlt(&name,creat("21.����",NULL));
	addlt(&name,creat("22.����",NULL));
	addlt(&name,creat("23.����",NULL));
	addlt(&name,creat("24.���",NULL));
	addlt(&name,creat("25.����",NULL));
	addlt(&name,creat("26.�ٿ�",NULL));
	addlt(&name,creat("27.�¹�",NULL));
	addlt(&name,creat("28.����",NULL));
	addlt(&name,creat("29.����",NULL));
	addlt(&name,creat("30.����",NULL));
	addlt(&name,creat("31.����",NULL));
	addlt(&name,creat("32.���",NULL));
	addlt(&name,creat("33.��ȯ",NULL));
	addlt(&name,creat("34.����",NULL));
	addlt(&name,creat("35.����",NULL));
	addlt(&name,creat("36.��ȣ",NULL));
	addlt(&name,creat("37.����",NULL));
	printli(name);
	printf("\n");
	outputran=rand()%38;
	
	printf("���� ��ȣ:%d\n\n",outputran);
	
	if (outputran>=5){
		mid=outputran;
		for(mid;length>=4;mid +=outputran){
			printf(">>>>");
			ouhead=gtnode(name,mid+1);
			del(name,mid);
			printli(name);
			printf("\n");
			name=ouhead;
			mid=0;
			}
		printf("Ż�� ���\n>>>>");
	    printli(name);
	}
	else {
		mid=outputran;
		for(mid;length>=4;mid +=outputran){
			mid=mid%(outputran*3);
			printf(">>>>");
			ouhead=gtnode(name,mid+1);
			del(name,mid);
			printli(name);
			printf("\n");
			name=ouhead;
			mid=0;
			}
		printf("Ż�� ��� \n>>>>");
	    printli(name);
		
	
	}
	
	system("pause");
}