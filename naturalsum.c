#include<stdio.h>

int main()
{
	
	int n,i,sum=1;
	printf("ENTER ANY NUMBER:");
	scanf("%d",&n);
	printf("natural number:%d\n",n);
	for(i=1;i<=n;i++)
	
	{
		printf("%d ",i);
	   sum=sum+i;
	   
	}
	
	printf("\nSum = %d",sum);
	return 0;
}