
/*
  Practical No : 04
  Title : Write a program to add digits of a number.
  Name : Taur Swanand Dattatray
  Roll No : MC26F14F064
*/

#include <stdio.h>
#include <conio.h>
int main()
{
  int num,digit,sum=0;
  clrscr();
  printf("Enter a integer value:");
  scanf("%d",&num);

  while(num>0)
  {
    digit = num % 10;
    sum += digit;
    num /= 10;
  }

  printf("Sum of digits in %d is %d",num,sum);

  getch();
  return 0;
}

