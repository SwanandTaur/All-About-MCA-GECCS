
/*
  Write a program to display factorials of numbers 1 to 7.
*/

#include<stdio.h>
#include<conio.h>

int main()
{
  int i,fact=1;
  clrscr();
  printf("Table of factorials\n");

  for(i=1;i<=7;i++)
  {
    fact *= i; //fact contains factorial of i
    printf("%d!= %d\n",i,fact);
  }
  getch();
  return 0;
}



