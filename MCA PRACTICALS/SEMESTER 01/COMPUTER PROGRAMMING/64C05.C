
/*
  Practical No : 05
  Title : Write a program to list prime  numbers from 1 to 500 using for
  statement.
  Name : Taur Swanand Dattatray
  Roll No : MC26F14F064
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>
int isPrime(int num)
{
  int i;
  for(i=2;i<=sqrt(num);i++)
  {
    if(num%i == 0)
      return 0;
  }
  return 1;
}
int main()
{
  int i;
  clrscr();
  for(i=1;i<=500;i++)
  {
    if(isPrime(i))
    {
      printf("%d,",i);
    }
  }
  getch();
  return 0;
}

