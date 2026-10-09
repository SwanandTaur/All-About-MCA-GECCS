
/*
  Write a program to evaluate 1-2+3-4+5-6+7-8+9-10 = -5
*/

#include<stdio.h>
#include<conio.h>

int main()
{
  int res=0,i;
  clrscr();

  for(i=1;i<=10;i++)
  {
    if(i%2 == 1)
    {
      res+=i;
      printf("%d-",i);
    }
    else
    {
      res-=i;
      (i==10) ? printf("%d",i) : printf("%d+",i);
    }
  }
  printf(" = %d",res);
  getch();
  return 0;
}