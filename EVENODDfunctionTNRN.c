//EVEN-ODD Using function Take Nothing Return Nothing

#include<stdio.h>

void fun()
{
	int a;
	printf("Enter any number : ");
	scanf("%d",&a);
	if(a%2==0)
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
	fun();
	return 0;
}