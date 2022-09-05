//EVEN-ODD Using function Take Something Return Something
#include<stdio.h>

int fun(int n)
{
	if(n%2==0)
	{
		printf("Number is EVEN....");
		
	}
	else
	{
		printf("Number is ODD...");
	}
	return n;
}

int main()
{
	int a,r;
	printf("Enter any Number : ");
	scanf("%d",&a);
	r=fun(a);
	return 0;
}