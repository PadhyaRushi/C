#include<stdio.h>

int main()
{
	int n,r,result;
	printf("enter number:");
	scanf("%d",&n);
	
	while(n>0)
	{
		r=n%10;
		result=result+r;
		n=n/10;
		
	}
	printf("Summition of Number = %d",result);
	return 0;
}