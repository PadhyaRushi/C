#include<stdio.h>

int swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a = %d \n b = %d",a,b);
	
}

int main()
{
	int x,y;
	printf("Enter any Two Number :\n");
	scanf("%d\n%d",&x,&y);
	swap(x,y);
	
	return 0;
}