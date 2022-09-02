#include<stdio.h>

int main()
{
	int n,r,result=0,c;
	printf("Enter any number:");
	scanf("%d",&n);
    c=n;
	while(n>0)
	{
		r=n%10;
		result=result+r*r*r;
		n=n/10;
	}
	if(c=result)
	{
		printf(" armstrong...",result);
	}
	else
	{
		printf(" not armstrong",result);
	}
	
	return 0;
}