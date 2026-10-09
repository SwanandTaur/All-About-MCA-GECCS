
/*
  Write a program to print multiplication table for the numbers 1 to 10.
*/

#include<stdio.h>
#include<conio.h>

int main()
{
  int i,j;
  clrscr();

  for(i=1;i<=10;i++)
  {
    for(j=1;j<=10;j++)
    {
      printf("%4d",i*j);
    }
    printf("\n");
  }
  getch();
  return 0;
}