/*
  Write a program to test weather a integer number is multiple of 2
*/

#include<stdio.h>
#include<conio.h>

int main()
{
  int a;
  clrscr();

  printf("Enter a integer number:");
  scanf("%d",&a);

  if(((a>>1)<<1) == a)
  {
    printf("%d is the multiple of 2",a);
  }
  else
  {
    printf("%d is not the multiple of 2",a);
  }

  getch();
  return 0;
}
