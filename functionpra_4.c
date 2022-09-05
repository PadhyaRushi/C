//Take Something Return Something

#include<stdio.h>

int total(int a,int b)
{
    int c;
	c=a+b;
	return c;	
}
int main()
{
	int x,y,z;
	printf("Enter any Two values :");
	scanf("%d\n%d",&x,&y);
	z=total(x,y);
	printf("Sum = %d",z);
	return 0;
}