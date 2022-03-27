#include<stdio.h>
void create();
void insert();
void delet();
void display();
void exit();
int ar[50],n;
int main()
{
  int ch;
    do{
       printf("ARRAY OPERATIONS\n");                         printf("MENU\n1.Create\n2.Insert\n3.delete\n4.dispaly\n5.Exit\n");
      printf("Enter your choice  ");
      scanf("%d",&ch);
      switch(ch)
    {
      case 1:create();
              break;
      case 2:insert();
              break;
      case 3:delet();
              break;
      case 4:display();
              break;
      case 5:
              break;
    }
  }while(ch!=5);
  return 0;
}
void create()
{
  int i;
  printf("Enter the size  ");
  scanf("%d",&n);
  printf("ENter the elements ");
  for(i=0;i<n;i++)
    {
      scanf("%d",&ar[i]);
    }
  printf("The array is created ");
}
void display()
  {
  int i;
  printf("The array elements are\n ");
  for(i=0;i<n;i++)
    {
      printf("%d\t",ar[i]);
    }
  }
void insert()
{
  int pos,ele,i;
  i=n;
  printf("Enter the postion ");
  scanf("%d",&pos);
  printf("Enter the item ");
  scanf("%d",&ele);
  while(i>=pos)
    {
      ar[i+1]=ar[i];
      i=i-1;
    }
  n=n+1;
  ar[pos]=ele;
  printf("%d element is inserted \n",ele);
}  
void delet()
  {
    int pos,i,a;
    printf("Enter the position ");
    scanf("%d",&pos);
    i=pos;
    ar[pos]=a;
    while(i<=n-1)
      {
        ar[i]=ar[i+1];
        i=i+1;
      }
    n=n-1;
    printf("%d element is deleted\n ",a);
  }

