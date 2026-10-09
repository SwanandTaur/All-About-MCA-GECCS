
/*
  Write a program to display square of numbers from 1 to 10.
*/

#include<stdio.h>
#include<conio.h>
int main()
{
 int i,j;
 clrscr();

 for(i=1,j=1;i<=10;i++,j++)
 {
   printf("%d ",i*j);
 }
 getch();
 return 0;
}