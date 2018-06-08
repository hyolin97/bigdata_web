#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct linkedlist{
	int data;
	struct linkedlist *link;

}linkedlist;
typedef struct{
	linkedlist *head;
	int length;
}listnode;
void add(listnode *ln,int boom, int con);
int comp(int m,int n);
linkedlist *getnode(listnode* list,int place);
void initial(listnode *list);
int longwid(listnode*list);
void insnode(linkedlist **go, linkedlist *top, linkedlist *new_node);
void error(char * warn);
void addlt(listnode *ln,int con);
int bin(listnode*list,int find,int left,int right);

int longwid(listnode *list){
	return list->length;
}
int comp(int m, int n){
	if (m==n) return 0;
	else if (m<n) return 1;
	else return -1;

}

void initial(listnode*list){
	if(list==NULL) return;
	list->head=NULL;
	list->length=0;

}
void error(char *warn){
	fprintf(stderr,"%s\n",warn);
	exit(1);
}


void insnode(linkedlist **go,linkedlist*top,linkedlist*new_node){
	if(*go==NULL){
		new_node->link=NULL;
		*go=new_node;
	}
	else if(top==NULL){
		new_node->link=*go;
		*go=new_node;
	}
	else{
		new_node->link=top->link;
		top->link=new_node;
	}

}
void add(listnode *ln,int boom,int con){
	linkedlist *init=(linkedlist *)malloc(sizeof(linkedlist));
	if((boom >=0) &&(boom <=ln->length)){
		linkedlist *room=(linkedlist*)malloc(sizeof(linkedlist));
		if(room==NULL) error("다시입력하세요.");
		room->data=con;
		init=getnode(ln,boom-1);
		insnode(&(ln->head),init,room);
		ln->length++;


	}

}
void addlt(listnode*ln,int con){
	add(ln,longwid(ln),con);
}
linkedlist *getnode(listnode*list, int place){
	int i;
	linkedlist *poim=list->head;
	if(place<0) return NULL;
	for(i=0;i<place;i++) poim=poim->link;
	return poim;
}
int bin(listnode *list, int find, int left, int right){
	linkedlist *cut;
	cut=list->head;
	
	right=list->length;
	while (left <=right){
		int stand=0, mid=0;
		stand=(left + right)/2;
		cut=getnode(list,stand);
		mid=cut->data;
		switch (comp(mid,find)){
		case 1:left=stand+1; printf("현재 중간값은%d째에있습니다. 오른쪽으로 이동합니다.\n",stand-1);break;
		case 0: return stand;break;
		case -1: right=stand-1;printf("현재 중간값은%d째에 있습니다. 왼쪽으로 이동합니다.\n",stand-1);

		}

	}
	return 2;
}
int main(void){
	int i=0, find=0, left=0, right=0;
	listnode *anode=(listnode *)malloc(sizeof(listnode));
	initial(anode);	
	addlt(anode,4);
	addlt(anode,7);
	addlt(anode,8);
	addlt(anode,11);
	addlt(anode,13);
	addlt(anode,15);
	addlt(anode,21);
	addlt(anode,26);
	addlt(anode,42);
	addlt(anode,43);
	addlt(anode,49);
	addlt(anode,48);
	addlt(anode,75);
	addlt(anode,96);
	addlt(anode,97);
	addlt(anode,103);
	printf("위치가 궁금한 수를 입력하여 주세요:");
	scanf("%d",&find);
	i=bin(anode,find,left,right);
	if(i== 2) printf("%d는 이 리스트에 없습니다.",find);
	else printf("%d는 리스트의 %d 번째에 있습니다.\n",find,i+1);
	system("pause");
}
