//EVEN-ODD Using function Take Nothing Return Something

#include<stdio.h>

int fun()
{
	int n;
	printf("Enter any Number : ");
	scanf("%d",&n);
	return n%2==0;
}

int main()
{
	
	if(fun())
	{
		printf("Number is EVEN..");
		
	}
	else
	{
		printf("Number is ODD..");
	}
	
	return0;
}