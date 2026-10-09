/*
  Practical No : 01
  Name : Taur Swanand Dattatray
  Roll No : MC26F14F064
  Title : Write a program to rotate values of variables X,Y,Z such that X->Y,Y->Z,Z->X.
*/

#include<stdio.h>
#include<conio.h>

int main()
{
  int x,y,z;
  clrscr();

  printf("Enter three numbers:");
  scanf("%d%d%d",&x,&y,&z);

  printf("Before rotating values X=%d, Y=%d, Z=%d",x,y,z);

  x += y+z , y = x-y-z, z = x-y-z, x = x-y-z;

  printf("\nAfter rotating values X=%d, Y=%d, Z=%d",x,y,z);

  getch();
  return 0;
}