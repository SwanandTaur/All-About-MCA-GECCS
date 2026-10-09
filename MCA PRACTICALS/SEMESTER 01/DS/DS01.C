
/*
  Practical No: 01
  Title: Write a program to find the length of string and print its reverse.

  Name: Taur Swanand Dattatray
  Roll No: MC26F14F064
*/

#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
  char st[10];
  int n,i;
  char *q;
  char *ps;ps=st;q=ps;
  clrscr();

  printf("Enter a string:");
  while((*ps=getchar())!='\n')
  {
    ps++;
  }
  while(*ps!='\n')
  {
    ps++;
  }
  n=ps-q;
  printf("\nLength of string = %d",n);
  --ps;
  printf("\nString in reverse order is:");
  for(i=0;i<n;i++)
  {
    putchar(*ps);
    ps--;
  }
  getch();
  return 0;
}































