//EVEN-ODD Using function Take Something Return Nothing

#include<stdio.h>

int fun(int n)
{
	if(n%2==0)
	{
		printf("Number is EVEN...");
		
	}
	else
	{
	   	printf("Number is ODD...");	
	}
	
	
}
int main()
{
	int x;
	printf("Enter any number : ");
	scanf("%d",&x);
	fun(x);
	return 0;
}