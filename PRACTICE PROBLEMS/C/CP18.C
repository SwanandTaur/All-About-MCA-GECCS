
/*
  Write a program to print a multiplication table of 7.
*/

#include<stdio.h>
#include<conio.h>

int main()
{
  int i,j;
  clrscr();

  for(i=1,j=7;i<=10;i++)
  {
    printf("%d ",i*j);
  }
  getch();
  return 0;
}