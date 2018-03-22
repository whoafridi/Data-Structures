#include <stdio.h>
 
typedef struct book{
    int no;
    char name;
} book;
 
 
int main ()
{
    book myBook;
    myBook.no = 3;
    myBook.name = 'C';
 
 
    printf( "Book No : %d\n", myBook.no);
    printf( "Book Name : %c\n", myBook.name);
 
 
    return 0;
}