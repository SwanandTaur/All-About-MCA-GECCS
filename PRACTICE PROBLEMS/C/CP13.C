
/*
  Write the proogram to display first 10 values of fibbonacci series
*/

#include<stdio.h>
#include<conio.h>
int main()
{
  int prev=0, curr=1,next,i;

  clrscr();
  printf("Fibbonacci Series: ");
  printf("%d %d ",prev,curr);

  for(i=1;i<=8;i++)
  {
    next = prev+curr;
    printf("%d ",next);
    prev = curr;
    curr = next;
  }
  getch();
  return 0;
}