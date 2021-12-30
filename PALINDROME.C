#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,sum=0,temp=0;
	clrscr();
	printf("enter the number ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	if(temp==sum)
		printf("%d is a palindrome number",temp);
	else
		printf("%d is not a palindrome number",temp);
	getch();
}