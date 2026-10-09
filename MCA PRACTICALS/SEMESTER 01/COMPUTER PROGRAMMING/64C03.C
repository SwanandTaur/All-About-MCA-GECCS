
/*
  Practical No : 03
  Title : Write a program to find factorial of a number.
  Name : Taur Swanand Dattatray
  Roll No : MC26F14F064
*/

#include <stdio.h>
#include <conio.h>
int main()
{
  int num,fact=1,i;
  clrscr();

  printf("Enter a number 1-7 to find Factorial:");
  scanf("%d",&num);

  for(i=1;i<=num;i++)
  {
    fact = fact*i;
  }
  printf("Factorial of %d is %d",num,fact);

  getch();
  return 0;
}

