//Take Something Return Nothing

#include<stdio.h>

void total(int a,int b)
{
	int c;
	c=a+b;
	printf("Sum of %d and %d = %d",a,b,c);
	
}
int main()
{
	 int x,y;
     printf("Enter any Two Values : ");
     scanf ("%d\n%d",&x,&y);
     total(x,y);
	return 0;
}