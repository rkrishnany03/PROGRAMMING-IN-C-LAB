#include<stdio.h>
int main(void) 
{
  int ar[50][50],m,n,i,j;
  printf("Enter the number of rows and columns ");
  scanf("%d%d",&m,&n);
  printf("Enter the elements of the array ");
  for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
        {
          scanf("%d",&ar[i][j]);
        }
    }
  printf("The array elements are\n ");
  for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
        {
          printf("%d\t",ar[i][j]);
        }
      printf("\n");
    }
  return 0;
}