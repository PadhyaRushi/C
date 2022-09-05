// Find square Take Something Return Nothing 
#include<stdio.h>

void square(int x)
{
	int y;
	y=x*x;
    printf("Square of Number  = %d",y);
	
	
}

int main()
{
	int a;
	printf("Enter any Number :");
	scanf("%d",&a);
	square(a);
	return 0;
}