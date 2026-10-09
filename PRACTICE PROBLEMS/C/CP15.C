
/*
   Write a program to evaluate 1+1/1!+1/2!+1/3!+1/4!..+17! = 2.71
*/

#include<stdio.h>
#include<conio.h>

int main()
{
  int f=1,i;
  float sum = 1;
  clrscr();

  for(i=1;i<=7;i++)
  {
    f*=i;
    sum += 1/(float)f;    //sum += 1.0/f;
  }
  printf("Sum of series is %f",sum);
  getch();
  return 0;
}