#include<stdio.h>
int main()
{
    int i,j,n,a[50][50],m;
    printf("Enter the no.of rows ");
    scanf("%d",&m);
    printf("Enter the no.of columns ");
    scanf("%d",&n);
    printf("Enter the array elements ");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }
    printf("Matrix\n");
    for(i=0;i<m;i++)
    {
       for(j=0;j<n;j++)
       {
         printf("%d\t",a[i][j]);
       }
       printf("\n");
    }
    return 0;
}