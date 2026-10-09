
/*
  Write the program to display odd numbers 1-20 with break statement
*/
#include<stdio.h>
#include<conio.h>
main()
{
  int i=1;
  clrscr();
  printf("Odd numbers in the range \'1-20\' are:\n");
  for(;;)
  {
    if(i>20)
      break;
    printf("%d,",i);
    i+=2;
  }
  printf("\b ");
  getch();
  return 0;
}