#include<stdio.h>

int main()
{
	int n;
	printf("Enter any year:");
	scanf("%d",&n);
	
	if(n%4==0)
	{
		printf("\n%d year is leap year",n);
	}
	else
	{
		printf("%d year is not leap year",n);
	}
	return 0;
}