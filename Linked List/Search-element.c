#include <stdio.h>
#include <stdlib.h>

typedef struct mylist{
    int data;
    struct mylist *next;
}node;

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

void search(node *ptr, int data)
{
    int count = 0;
    while(ptr->next != NULL)
    {
        if(ptr->next->data == data)
        {
            count++;
        }
        ptr = ptr->next;
    }
    printf("Total %d results found\n", count);
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
    printf("The linked list is : \n");
    insert(head,2);
    insert(head,4);
    insert(head,6);
    insert(head,8);
    display(head);
    
    search(head,8);
    
    return 0;
}