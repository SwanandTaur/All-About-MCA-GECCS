
/*
  Write a program to test weather the given number is prime.
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
  int num,i,flag=1;
  clrscr();

  printf("Enter a number:");
  scanf("%d",&num);

  for(i=2;i<=sqrt(num);i++)
  {
    if(num%i == 0)
    {
      flag = 0;
      break;
    }
  }

  if(flag==1)
    printf("%d is prime",num);
  else
    printf("%d is not prime",num);
  getch();
  return 0;
}




