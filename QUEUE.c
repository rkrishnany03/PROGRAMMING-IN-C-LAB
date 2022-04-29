#include <stdio.h>
#define MAX 5
int queue[MAX],rear=-1,front=-1;
int insert();
int delete();
int display();
int main()
{
  int ch;
  do
    {
      printf("*****MENU*****\n");
      printf("1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n");;
      printf("Enter yur choice ");
      scanf("%d",&ch);
      switch(ch)
        {
          case 1:insert();
                  break;
          case 2:delete();
                  break;
          case 3:display();
                  break;
        }
    }while(ch!=4);
        return 0;

}
int insert()
{
  int item;
  if(rear==MAX-1)
  {
    printf("Overflow");
  }
  else{
    printf("Enter the element to insert\t");
    scanf("%d",&item);
    if(front==-1&&rear==-1)
    {
      front=0;
      rear=0;
    }
    else
    {
      rear=rear+1;
    }
    queue[rear]=item;
  }
  return 0;
}

int delete()
  {
    int val;
    if(front==-1||front>rear)
      printf("Underflow");
    else
    {
      val=queue[front];
      front=front+1;
      printf("The deleted elemne is %d",val);
    }
    return 0;
  }

int display()
{
  int i;
  if(front==-1 && rear==-1)
    printf("The queue is Empty");
  else
    {
    printf("*****Queue*****\n");
      for(i=front;i<=rear;i++)
        {
          printf("%d\t",queue[i]);
        }
    }
    return 0;
  }