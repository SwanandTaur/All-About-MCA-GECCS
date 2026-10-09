
/*
  Write a program to display odd numbers in the range of 1-20 using continue
  statement
*/

#include<stdio.h>
#include<conio.h>
int main()
{
  int i;
  clrscr();
  printf("Odd numbers in the range \'1-20\' are:\n");
  for(i=1;i<=20;i++)
  {
    if(i%2 == 0)
      continue;
    printf("%d,",i);
  }
  printf("\b ");
  getch();
  return 0;
}