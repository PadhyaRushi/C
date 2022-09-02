#include<stdio.h>

int main()
{
	int n,r,result,first,last;
	printf("enter number:");
	scanf("%d",&n);
	last=n%10;
	printf("Last Value of Number : %d\n",last);
	while(n>0)
	{
		first=n%10;
		n=n/10;
		
	}
	printf("First Value of Number : %d\n",first);
	printf("Summition of First and Last Number = %d ",first+last);
	return 0;
}