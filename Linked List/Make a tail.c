#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
   int data;
   struct Node *next;
 }node;
 
 node *tail;

int main ()
{
  
  tail = (node*)malloc(sizeof(node));
  tail->data = 10;
  tail->next = (node*)malloc(sizeof(node));
  tail = tail->next;
  tail->data = 20;
  tail->next  = (node*)malloc(sizeof(node));
  tail = tail->next;
  tail->data = 30;
  tail->next = NULL;
  
  printf("%d\n",tail->data);
 
  return 0;
}