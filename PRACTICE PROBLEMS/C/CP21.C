/*
  Write a C program to input marks of a student in three subjects and
  detemine weather the student the student is Pass, Conditionally Pass, or
  Fail based on the following conditions:

  1.If the student scores 50 or more marks in each of the three subjects,
    the student is PASS.
  2.Otherwise, if the student scores more than 40 marks in at least one
    subjects is 50% or more, the student is CONDITIONAL PASS.
  3.Otherwise,the student is FAIL.
*/

#include<stdio.h>
#include<conio.h>

int main()
{
  int c1,c2,c3,avg;
  int cCount=0;
  clrscr();

  printf("Enter marks of three subjects:");
  scanf("%d%d%d",&c1,&c2,&c3);

  avg = (c1+c2+c3)/3;

  if(c1>=40 && c2>=40 && c3>=40)
  {
    if(c1<50)
      cCount++;
    if(c2<50)
      cCount++;
    if(c3<50)
      cCount++;

    if(cCount == 0)
      printf("Passs...");
    else if(cCount ==1 && avg>=50)
      printf("Consasional Passs...");
    else
      printf("Failed...!");
  }
  else
  {
    printf("Failed...!");
  }
  getch();
  return 0;
}
