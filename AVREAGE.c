#include<stdio.h>
void array();
int main()
{
  array();
  return 0;
}
void array()
{
  int n,ar[20],i=0,sum=0,avg=0;
  printf("Enter the limit of the array ");
  scanf("%d",&n);
  printf("Enter the array elements ");
  while(i<n)
    {
      scanf("%d",&ar[i]);
      sum=sum+ar[i];
      avg=sum/n;
      i++;
    }
  printf("Average of the array elements are %d",avg);
}