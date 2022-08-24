#include<stdio.h>

int main()
{
	
	int n,i,j;
	float avrg,sum;
	for(i=1;i<=10;i++)
	{
		printf("NUMBER:\n");
    	scanf("%d",&n);
    	
    	
	}
	
	
	for(j=1;j<=n;j++)
	
	{
	
	    sum=sum+j;
	    avrg=sum/10;
	}
	printf("\nSum = %.0f",sum);
	printf("\nAverage = %.2f",avrg);
	
	return 0;
}