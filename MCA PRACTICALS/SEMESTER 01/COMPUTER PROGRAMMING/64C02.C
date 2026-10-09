
/*
  Practical No : 02
  Title : Write a program to find largest of three numbers.
  Name : Taur Swanand Dattatray
  Roll : MC26F14F064
*/

#include<stdio.h>
#include<conio.h>

int main()
{
  int n1,n2,n3;
  clrscr();

  printf("Enter three numbers:");
  scanf("%d%d%d",&n1,&n2,&n3);

  if(n1>n2)
  {
    if(n1>n3)
    {
      printf("The largest number is %d",n1);
    }
    else
    {
      printf("The largest number is %d",n3);
    }
  }
  else
  {
    if(n2>n3)
    {
      printf("The largest number is %d",n2);
    }
    else
    {
      printf("The largest number is %d",n3);
    }
  }

  getch();
  return 0;
}