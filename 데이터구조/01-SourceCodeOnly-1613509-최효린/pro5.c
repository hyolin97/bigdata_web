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
	if(nupnode==NULL) back("¿¡·¯ÀÔ´Ï´Ù.");
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
	addlt(&name,creat("1.È¿¸°",NULL));
	addlt(&name,creat("2.¹Î±Ô",NULL));
	addlt(&name,creat("3.¼ÒÁ¤",NULL));
	addlt(&name,creat("4.ÀÚÀ±",NULL));
	addlt(&name,creat("5.Áö¿µ",NULL));
	addlt(&name,creat("6.ÁöÇö",NULL));
	addlt(&name,creat("7.Áö¿ø",NULL));
	addlt(&name,creat("8.ÁÖ¿µ",NULL));
	addlt(&name,creat("9.¼­¿µ",NULL));
	addlt(&name,creat("10.µ¿±Ù",NULL));
	addlt(&name,creat("11.¿ë¿ì",NULL));
	addlt(&name,creat("12.ÈñÀ±",NULL));
	addlt(&name,creat("13.ÀçÀº",NULL));
	addlt(&name,creat("14.ÇöÀç",NULL));
	addlt(&name,creat("15.ÇıÀ±",NULL));
	addlt(&name,creat("16.Ã¤¸°",NULL));
	addlt(&name,creat("17.ÇØ¶õ",NULL));
	addlt(&name,creat("18.À¯Áø",NULL));
	addlt(&name,creat("19.Ã¢Çö",NULL));
	addlt(&name,creat("20.°Ç¿µ",NULL));
	addlt(&name,creat("21.¿¹µ¿",NULL));
	addlt(&name,creat("22.¿¹Âù",NULL));
	addlt(&name,creat("23.ÁøÇõ",NULL));
	addlt(&name,creat("24.Àç¿ø",NULL));
	addlt(&name,creat("25.ÀçÇõ",NULL));
	addlt(&name,creat("26.´Ù¿¬",NULL));
	addlt(&name,creat("27.ÅÂ¹Î",NULL));
	addlt(&name,creat("28.Áö¾Æ",NULL));
	addlt(&name,creat("29.¹ÎÇõ",NULL));
	addlt(&name,creat("30.¼¼Àº",NULL));
	addlt(&name,creat("31.Áö¿¬",NULL));
	addlt(&name,creat("32.¸í´ö",NULL));
	addlt(&name,creat("33.±ÙÈ¯",NULL));
	addlt(&name,creat("34.ÀÎÇı",NULL));
	addlt(&name,creat("35.ÇıÁö",NULL));
	addlt(&name,creat("36.°æÈ£",NULL));
	addlt(&name,creat("37.¿¹¸°",NULL));
	printli(name);
	printf("\n");
	outputran=rand()%38;
	
	printf("»ÌÈù ¹øÈ£:%d\n\n",outputran);
	
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
		printf("Å»Ãâ ¸í´Ü\n>>>>");
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
		printf("Å»Ãâ ¸í´Ü \n>>>>");
	    printli(name);
		
	
	}
	
	system("pause");
}