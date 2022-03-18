#include<stdio.h>
void array();
int main()
{
  array();
  return 0;
}
void array()
{
  int n,ar[20],i=0;
  printf("Enter the limit of the array ");
  scanf("%d",&n);
  printf("Enter the array elements ");
  while(i<n)
    {
      scanf("%d",&ar[i]);
      i++;
    }
  printf("The array elements are ");
  for(i=0;i<n;i++)
    {
      printf("%d\t",ar[i]);
    }
}