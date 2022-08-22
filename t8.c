#include<stdio.h>

int main()
{
	int n;
	long int fact=1;
	printf("enter any number:");
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++)
	{   
		fact=fact*i;
	}
	printf("factorial =%d",fact);
	return 0;
}   