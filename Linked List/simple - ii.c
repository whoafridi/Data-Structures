#include <stdio.h>
#include <stdlib.h>
typedef struct joss{
  int data;
  float data2;
  struct joss *next;
}node;
node *create()
{
    return (node*)malloc(sizeof(node));
}
void insert(node *ptr, int data,float data2)
{
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = create();
    ptr->next->data = data;
    ptr->next->data2 = data2;
    ptr->next->next = NULL;
}
void display(node *ptr)
{
    while(ptr->next != NULL)
    {
        printf("{%d,", ptr->next->data);
        printf("%.2f} ",ptr->next->data2);
        ptr = ptr->next;
    }
 printf("\n");
}

int main()
{
    node *head = create();
    head->next = NULL;

        insert(head,3,2.8);
        insert(head,5,3.7);
        insert(head,7,2.9);
        display(head);


    return 0;
}
