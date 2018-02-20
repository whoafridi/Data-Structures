#include<stdio.h>
#include<stdlib.h>

typedef struct mylist{
  int data;
  struct mylist *next;
}node;

void printlist(node *n){
  printf("LINked list is : ");
  while(n != NULL){
    printf(" %d->",n->data);
    n = n->next;
  }
  printf("NULL\n");
}

int main (){
  node	*first=(node*)malloc(sizeof(node));
	node *second=(node*)malloc(sizeof(node));
  node *third = (node*)malloc(sizeof(node));

	first->data=2;
	first->next=second;
	second->data=4;
	second->next=third;
	third->data = 6;
	third->next=NULL;

printlist(first);


}