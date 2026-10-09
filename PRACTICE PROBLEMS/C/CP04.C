
/*
  Title : Write a C program to find maximum between three numbers.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
  int a,b,c;
  clrscr();

  printf("Enter three integer numbers:");
  scanf("%d%d%d",&a,&b,&c);

  if(a>b)
  {
    if(a>c)
    {
      printf("%d is the maximum among three inputs",a);
    }
    else
    {
      printf("%d is the maximum among three inputs",c);
    }
  }
  else
  {
    if(b>c)
    {
      printf("%d is the maximum among three inputs",b);
    }
    else
    {
      printf("%d is the maximum among three inputs",c);
    }
  }
  getch();
  return 0;
}