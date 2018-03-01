#include <stdio.h>
#include <stdlib.h>
typedef struct mylist
{
    int data;
    struct mylist *next;
} node;

node *create()
{
    return (node*)malloc(sizeof(node));
}

void insert(node *ptr, int data)
{
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = create();
    ptr->next->data = data;
    ptr->next->next = NULL;
}

void display(node *ptr)
{
    while(ptr->next != NULL)
    {
        printf("%d -> ", ptr->next->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int main()
{
    node *head = create();
    head->next = NULL;
    printf("How many numbers ?\n");
    int n,i,x;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter the number \n");
        scanf("%d",&x);
        insert(head,x);
        display(head);

    }
    return 0;
}
