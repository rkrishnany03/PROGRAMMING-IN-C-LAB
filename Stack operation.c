#include <stdio.h>
#define MAX 5

int stack[MAX],top=-1;
int push();
int pop();
int peek();
int display();

int main() 
{
  int ch;
  do
    {
       printf("\n*****MENU*****");
      printf("\n1.Push");
      printf("\n2.Pop");
      printf("\npeek");
      printf("\nDisplay");
      printf("\nExit");
      printf("\nEnter your choice\t");
      scanf("%d",&ch);
      switch(ch)
        {
          case 1:push();
            break;
          case 2:pop();
            break;
          case 3:peek();
            break;
          case 4:display();
            break;
        }
    }while(ch!=5);
  return 0;
}
int push()
{
  int item;
  if(top==MAX-1)
  {
    printf("Stack overflow");
  }
  else
  {
    printf("Enter the element to push ");
    scanf("%d",&item);
    top=top+1;
    stack[top]=item;
  }
  return 0;
}
int pop()
{
  int item;
  if(top==-1)
  {
    printf("Stack Underflow");
  }
  else
  {
    item=stack[top];
    top=top-1;
    printf("popped value is %d",item);
  }
  return 0;
}
int peek()
{
  if(top==-1)
  {
    printf("The stack is empty");
  }else
    printf("the peek element is %d",stack[top]);
  return 0;
}
int display()
{
  int i;
  if(top==-1)
    printf("The stack is empty");
  else
    printf("STACK");
  {
    for(i=0;i<=top;i++)
      {
        printf("%d\t",stack[i]);
      }
  }
    return 0;
}