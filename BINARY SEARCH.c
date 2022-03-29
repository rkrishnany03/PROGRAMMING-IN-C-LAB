#include<stdio.h>
void binary();
int main()
{
  binary();
  return 0;
}
void binary()
{
  int n,ar[50],beg,end,item,mid,i,pos;
  printf("Enter the limit of  elements ");
  scanf("%d",&n);
  printf("Enter the elelments ");
  for(i=0;i<n;i++)
    {
      scanf("%d",&ar[i]);
    }
  printf("The array elements are :");
  for(i=0;i<n;i++)
    {
      printf("%d\t",ar[i]);
    }
  printf("\nEnter which element is to be searching ");
  scanf("%d",&item);
  beg=0;
  end=n-1;
  while(beg<=end)
    {
      mid=(beg+end)/2;
      if(ar[mid]==item)
      {
        pos=mid;
        printf("%d found at %d location ",item,pos+1);
        break;
      }
      else if(ar[mid]>item)
        end=mid-1;
      else
        beg=mid+1;
    }
  if(pos==-1)
    printf("Usucccesful search    item is not found ");
}