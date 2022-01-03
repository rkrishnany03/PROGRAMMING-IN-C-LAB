#include<stdio.h>
int main()
{
    int i,n,a[50];
    printf("Enter the limit ");
    scanf("%d",&n);
    printf("Enter the array elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array elements are: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}