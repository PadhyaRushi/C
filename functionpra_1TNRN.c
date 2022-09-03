//Take Nothing Return Nothing

#include<stdio.h>

void total()
{
	int a,b;
	printf("Enter any Two Number : ");
	scanf("%d\n%d",&a,&b);
	printf("\nSum of %d and %d = %d ",a,b,a+b);
}

int main()
{
	total();	
	return 0;
}