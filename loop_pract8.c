#include<stdio.h>

int main()
{
	int fact=1,n,i=1;
	
	printf("Enter any number:");
	scanf("%d",n);
	
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	
	printf("FACTORIAL => %d",fact);
	
	
	
	
	
	return 0;
}