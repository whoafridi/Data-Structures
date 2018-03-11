## Intro to Doubly Linked list 

#include<stdio.h>
#include<stdlib.h>

typedef struct joss {
  int data ;
  float data2;
  struct joss *next;
  struct joss *prev;
}node;

int main (){
  node *A = (node*)malloc(sizeof(node));
  node *B = (node*)malloc(sizeof(node));
  node *C = (node*)malloc(sizeof(node));
  
  A->data = 3;
  A->data2 = 3.3;
  B->data = 5;
  B->data2 = 5.5;
  C->data = 7;
  C->data2 = 7.7;
  
  A->next = B;
  B->next = C;
  C->next = NULL;
  
  C->prev = B;
  B->prev = A;
  A->prev = NULL;
  
  printf("The Forward list : \n");
  while( A != NULL){
    printf("{ %d,%.1f } \n",A->data,A->data2);
    A = A->next;
  }
  
  printf("The backward list : \n");
  while( C != NULL){
    printf("{ %d,%.1f } \n",C->data,C->data2);
    C = C->prev;
  }
  
  
  return 0;
}