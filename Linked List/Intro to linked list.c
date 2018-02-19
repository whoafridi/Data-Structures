#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
   int data;
   struct Node *next;
 }node;
 
int main ()
{
  node *A = (node*)malloc(sizeof(node));
  node *B = (node*)malloc(sizeof(node));
  node *C = (node*)malloc(sizeof(node));
  
  A-> data = 5;
  B-> data = 10;
  C-> data = 15;
  
  A->next = B;
  B->next = C;
  C->next = NULL; 
  
  printf("Linklist is\n");
  while(A != NULL)
  {
    printf("%d->",A->data);
    A = A->next;
  }
  printf("NULL");
  
  return 0;
}