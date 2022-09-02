#include<stdio.h>

int main()
{
	int n,r,result=0,p;
	printf("enter number:");
	scanf("%d",&n);
	p=n;
	while(n>0)
	{
		r=n%10;
		result=(result*10)+r;
		n=n/10;
	}
	if(p==result)
	{
		printf("Palindrome...");
	}
	else
	{
		printf("Not Palindrome...");
	}
}