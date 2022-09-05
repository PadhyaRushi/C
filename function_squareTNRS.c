// Find square Take Nothing Return Something 

#include<stdio.h>

int square()
{
	int x,s;
	printf("Enter any Number :");
	scanf("%d",&x);
	s=x*x;
	return s;
}

int main()
{
	int y;
	y=square();
	printf("Square of number = %d",y);
	return 0;
}