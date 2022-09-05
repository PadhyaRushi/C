//Take Nothing Return Something

#include<stdio.h>

int total()
{
	int a,b,c;
	printf("Enter any Two values: ");
	scanf("%d\n%d",&a,&b);
	c=a+b;

	return c;
}

int main()
{
    int s;
    s=total();
   	printf("Sum = %d",s);
	return 0;
}