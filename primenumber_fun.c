#include<stdio.h>

int prime()
{
	int n,count;
	printf("Enter any Number:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	
	{
		if(n%i==0)
		{ 	
		
		count++;
		
		}
	
		
	}
	
	return count==2;	
}


int main()
{
	if(prime())
	{   
	   printf("Its Prime Number...");
	   
	}
	else
	{
		printf("Its Not Prime Number...");
		
	}
	
return 0;
	
}