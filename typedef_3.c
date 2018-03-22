## using typedef 

#include <stdio.h>

struct Book{
  char name[20];
  float price;
};

int main () 
{ 
  
  typedef struct Book book;
  
  book b = {"C Programming" , 200.99};
  
  printf("The name of this book is %s\n",b.name);
  printf("Price of this book is %.2f\n",b.price);
  
  return 0;
  
}

## Let's code !