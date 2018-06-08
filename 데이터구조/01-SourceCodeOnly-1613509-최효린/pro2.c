#include <stdio.h>
#include <stdlib.h>

#define MAX 10

struct nunode {
 int data;
 struct nunode *next;
} *head, *visit;
void selection_sortli(void);
void printli(void);
void addli(struct nunode **q, int num);
int main(void) {
 struct nunode *nod = NULL;
 int i = 0; 
 
  addli(&nod, 96);
  addli(&nod, 4);
  addli(&nod, 26);
  addli(&nod, 49);
  addli(&nod, 75);
  addli(&nod, 103);
  addli(&nod, 43);
  addli(&nod, 42);
  addli(&nod, 21);
  addli(&nod, 7);
  addli(&nod, 15);
  addli(&nod, 97);
  addli(&nod, 13);
  addli(&nod, 11);
  addli(&nod, 8);
  addli(&nod, 48);
 
 head = nod;
 printf("정렬 전:\n");
 printli();
 printf("정렬:\n");
 selection_sortli();
 printli();
 system("pause");
 return 0;
}
void printli(void) {
 visit = head;
  
 while(visit != NULL) {
  printf("%d ", visit->data);
  visit = visit->next;
 }
 printf("\n");
}

void selection_sortli(void) {
 struct nunode *n1 = NULL;
 struct nunode *n2 = NULL;
 struct nunode *n3 = NULL;
 struct nunode *n4 = NULL;
 struct nunode *tmp = NULL;

 n1 = n3 = head;
 while(n1->next != NULL) {
  n4 = n2 = n1->next;
  while(n2 != NULL) {
   if(n1->data > n2->data) {
    
    if(n1->next == n2) { 
     if(n1 == head) {
      n1->next = n2->next;
      n2->next = n1;
      tmp = n1;
      n1 = n2;
      n2 = tmp;
      head = n1;
      n3 = n1;
      n4 = n2;
      n2 = n2->next;
	  printli();
     } else {
      n1->next = n2->next;
      n2->next = n1;
      n3->next = n2;
      tmp = n1;
      n1 = n2;
      n2 = tmp;
      n4 = n2;
      n2 = n2->next;
	  printli();
     }
    } else {
     if(n1 == head) {
      tmp = n2->next;
      n2->next = n1->next;
      n1->next = tmp;
      n4->next = n2;
      tmp = n1;
      n1 = n2;
      n2 = tmp;
      n4 = n2;
      n2 = n2->next;
      head = n1;
	  printli();
	  
    } else {
     tmp = n2->next;
     n2->next = n1->next;
     n1->next = tmp;
     n3->next = n2;
     n4->next = n1;
     tmp = n1;
     n1 = n2;
     n2 = tmp;
     n4 = n2;
     n2 = n2->next;
	 printli();
    }
   }
  } else {
   n4 = n2;
   n2 = n2->next;
   
  }
 }
  n3 = n1;
  n1 = n1->next;
  
 }
}
void addli(struct nunode **gu, int num) {
 struct nunode *lac; 
 
 lac = *gu;

 if(*gu == NULL) {
  *gu = malloc(sizeof(struct nunode));
   lac = *gu;
 } else {
  
  while(lac->next != NULL)
   lac = lac->next;
   
   lac->next = malloc(sizeof(struct nunode));
   lac = lac->next;
 }

 lac->data = num;
 lac->next = NULL;
}

