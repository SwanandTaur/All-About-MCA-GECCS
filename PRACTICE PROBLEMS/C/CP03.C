
/*
  Title : Write a program to find largest of three numbers without using any
  decision making statement/conditional operator.
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
  int a,b,c,largest;
  clrscr();

  printf("Enter three integer values:");
  scanf("%d%d%d",&a,&b,&c);

  largest = (a + b + abs(a-b))/2;
  largest = (largest + c + abs(largest-c))/2;

  printf("Largest = %d",largest);
  getch();
  return 0;
}