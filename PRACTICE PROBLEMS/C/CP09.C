
/*
  Write a program to display grades of students on your marks he has earned in their examination
*/

#include <stdio.h>
#include <conio.h>

int main()
{
  int marks;
  clrscr();

  printf("Enter the marks of the student:");
  scanf("%d",&marks);

  if(marks > 80)
    printf("Passed in A+");
  else if(marks > 59)
      printf("Passed in A grade");
      else if(marks > 49)
	printf("Passed in B grade");
	else if(marks > 39)
	  printf("Passed in C grade");
	  else
	    printf("Failed");

  getch();
  return 0;
}
