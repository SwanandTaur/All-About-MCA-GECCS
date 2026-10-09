
/*
  Practical No: 02
  Title: Write a program for array of structure.

  Name: Taur Swanand Dattatray
  Roll No: MC26F14F064
*/

#include<stdio.h>
#include<conio.h>

struct invent
{
  char *name[10];
  int number;
  int price;
};

int main()
{
  struct invent product[3];
  struct invent *p;
  int i=1;
  p=product;
  clrscr();

  printf("Enter the product name, number and price:\n");
  for(p=product;p<product+3;p++)
  {
    printf("Product%d\n",i);
    scanf("%s%d%d",p->name,&p->number,&p->price);
    i++;
  }
  for(p=product;p<product+3;p++)
  {
    printf("\n%s%d%d",p->name,p->number,p->price);
  }
  getch();
  return 0;
}
