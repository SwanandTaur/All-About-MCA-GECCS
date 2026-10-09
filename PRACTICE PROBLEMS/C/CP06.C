
/*
  Write a program to demonstrate a number is odd or even using bitwize operator.
*/

#include<stdio.h>
#include<conio.h>
int main()
{
  int a;
  clrscr();

  printf("Enter a integer number:");
  scanf("%d",&a);

  if(a&1)
  {
    printf("%d is the odd number");
  }
  else
  {
    printf("%d is the even number");
  }
  getch();
  return 0;
}