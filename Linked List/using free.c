#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
    int data;
    struct list *next;
}node;

int main()
{
    node *first = (node*) malloc(sizeof(node));
    node *second = (node*) malloc(sizeof(node));
    node *third = (node*) malloc(sizeof(node));

    first->data = 8;
    second->data = 2;
    third->data = 7;

    first->next = second;
    second->next = third;
    third->next = NULL;
    
    printf("%d ->%d ->%d",first->data,second->data,third->data);
    free(first);
    free(second);
    free(third);
    return 0;
}