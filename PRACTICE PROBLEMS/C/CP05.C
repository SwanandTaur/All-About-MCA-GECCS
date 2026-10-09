
/*
  Write a program to test a number is odd or even.
*/

#include<stdio.h>
#include<conio.h>

int main()
{
  int a;
  clrscr();
  printf("Enter a integer number:");
  scanf("%d",&a);

  if(a%2)
  {
    printf("%d is the odd number.",a);
  }
  else
  {
    printf("%d is the even number.",a);
  }

  getch();
  return 0;
}
