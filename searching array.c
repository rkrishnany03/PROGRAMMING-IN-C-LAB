#include <stdio.h>
int main(void) 
{
  int n,ar[10],i,item;
 printf("Enter the array limit ");
 scanf("%d",&n);
 printf("Enter the array elements");
 for(i=0;i<n;i++)
 {
   scanf("%d",&ar[i]);
 }
 printf("Enter the element to be searched ");
 scanf("%d",&item);
 for(i=0;i<n;i++)
 {
   if(item==ar[i])
   {
     printf("%d is found at loaction %d",item,i+1);
     break;
   }
 }
 if(i==n)
 printf("the searched item is not found");
 return 0;
}