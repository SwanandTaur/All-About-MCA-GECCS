
/*
  Title - Write a program to swap values of two variables using a temporary variable.
*/
#include<stdio.h>
#include<conio.h>
  int main()
  {
    int n1,n2,temp;
    clrscr();

    printf("Enter two integer values:");
    scanf("%d%d",&n1,&n2);
    printf("Before swapping values n1=%d and n2=%d",n1,n2);

    temp=n1,n1=n2,n2=temp;

    printf("\nAfter swapping values n1=%d and n2=%d",n1,n2);
    getch();
    return 0;
  }

