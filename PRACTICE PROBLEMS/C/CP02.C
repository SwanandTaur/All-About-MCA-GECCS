
/*
  Title : Write a program to swap values of two variables without using a temporary variable.
*/
#include<stdio.h>
#include<conio.h>

int main()
{
  int n1,n2;
  clrscr();

  printf("Enter two integer value:");
  scanf("%d%d",&n1,&n2);
  printf("Before swapping values n1=%d and n2=%d",n1,n2);

  n1+=n2;
  n2=n1-n2;
  n1-=n2;

  printf("\nAfter swapping values n1=%d and n2=%d",n1,n2);
  getch();
  return 0;
}