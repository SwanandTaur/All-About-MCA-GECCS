
/*
  Practical No: 03
  Title: Write a program to implement stack and operations on stack.

  Name: Taur Swanand Dattatray
  Roll No: MC26F14F064
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define maxsize 10

void push(struct stack *p,int x);
int pop(struct stack *ps);
void showstack(struct stack *ps);

struct stack
{
  int top;
  int item[maxsize];
}s;

void main()
{
  int choice,ele,*i;
  struct stack *ps;
  s.top=-1;

  printf("Select one option: \n Choice1: PUSH \n Choice2: POP \n Choice3:Display Stack \n Choice4:Exit\n");
  while(choice!=4)
  {
    printf("Enter correct option:");
    scanf("%d",&choice);
    if(choice == 1)
    {
      printf("\nEnter the element to be inserted.");
      scanf("%d",&ele);
      push(&s,ele);
    }
    if(choice ==2)
    {
      *i=pop(&s);
      printf("\nThe deleted item is:%d\n",*i);
    }
    if(choice == 3)
    {
      showstack(&s);
    }
    if(choice == 4)
    {
      exit(0);
    }
  }
  getch();
}

void push(struct stack *ps,int x)
{
  ps->top++;
  ps->item[ps->top]=x;
}
int pop(struct stack *ps)
{
  int y;
  y=ps->item[ps->top];
  ps->top--;
  return y;
}

void showstack(struct stack *ps)
{
  int i;
  if(ps->top==-1)
  {
    printf("Stack is empty...");
  }
  else
  {
    printf("Elements of stack:-\n");
    for(i=ps->top;i>=0;i--)
    {
      printf("%d\n",ps->item[i]);
    }
  }
}