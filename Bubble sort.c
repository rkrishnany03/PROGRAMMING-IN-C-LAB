#include<stdio.h>
int main()
{
  int n,ar[50],i,j,a;
  printf("Enter the limit of the array ");
  scanf("%d",&n);
  printf("Enter the elements of the array ");
  for(i=0;i<n;i++)
    {
      scanf("%d",&ar[i]);
    }
  for(i=0;i<n-1;i++)
    {
      for(j=0;j<n-1;j++)
        {
          if(ar[j]>ar[j+1])
          {
            a=ar[j];
            ar[j]=ar[j+1];
            ar[j+1]=a;
          }
        }
    }
  printf("Sorted array = ");
  for(i=0;i<n;i++)
    {
      printf("%d\t",ar[i]);
    }
  return 0;
}