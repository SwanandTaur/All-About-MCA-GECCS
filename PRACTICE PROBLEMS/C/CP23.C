
/*
  Write a program to check weather a character is alfabet or not.
*/

#include<stdio.h>
#include<conio.h>

int main()
{
  char ch;
  clrscr();

  printf("Enter a character:");
  scanf("%c",&ch);

  if(ch>='a'  && ch<='z' || ch>='A' && ch<='Z')
  {
    printf("Character is alphabet");
  }
  else
  {
    printf("Character is not alphabet");
  }
  getch();
  return 0;
}
