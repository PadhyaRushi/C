#include<stdio.h>

int main()
{
	int i,n,cube;
	printf("ENTER NUMBER OF TERMS:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		
	printf("Number is : %d and cube of the %d is :%d\n",i,i,i*i*i);
	}

	return 0;
}