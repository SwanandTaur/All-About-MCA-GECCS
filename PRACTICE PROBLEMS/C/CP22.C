/*
  Write a program to check weather a number is negative, positive or zero.
*/

#include<stdio.h>
#include<conio.h>

int main()
{
  int num;
  clrscr();

  printf("Enter a number:");
  scanf("%d",&num);

  num>0 ? printf("Positive") : num<0 ? printf("Negative") : printf("Zero");

  getch();
  return 0;
}