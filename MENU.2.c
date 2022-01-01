#include <stdio.h>
int main()
{
  int ch,n,tmp=0,i,r,c,sum=0,a=0,b=1,per=0;
  while(ch!=4)
  {
  printf("\n---MENU---\n");
  printf("1.Amstrong\n2.Palindrome\n3.Fibonacci\n4.Exit\n");
  printf("Enter your choice");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
            printf("Amstrong\n");
            printf("Enter the number ");
            scanf("%d",&n);
            tmp=n;
            while(n>0)
            {
              r=n%10;
              c=r*r*r;
              sum=sum+c;
              n=n/10;
            }
            if(tmp==sum)
                printf("%d is Amstrong",tmp);
            else
                printf("%d is not Amstrong",tmp);
            break;
    case 2:
            printf("Palindrome\n");
            printf("Enter the number ");
            scanf("%d",&n);
            tmp=n;
            while(n>0)
            {
              r=n%10;
              sum=sum*10+r;
              n=n/10;
            }
            if(tmp==sum)
                  printf("%d is Palindrome",tmp);
            else
                 printf("%d is not Palindrome",tmp);
            break;
    case 3:
            printf("Fibonacci Series\n");
            printf("Enter the limit");
            scanf("%d",&n);
            for(i=1;i<=n;i++)
            {
              printf("%d\t",a);
              c=a+b;
              a=b;
              b=c;
            }
            break;
    case 4:
            printf("Exit\n");
            printf("Exit");
            break;
  }
  }
  return 0;
}