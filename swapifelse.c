#include<stdio.h>

int main()
{
	int a,b;
	printf("ENTER FIRST NUMBER:");
	scanf("%d",&a);
	printf("ENTER SECOND NUMBER:");
	scanf("%d",&b);
	
	if(a=b)
	{
		printf("First Number =%d\n",a);
    }
	 if(b=a)
	{
		b=a+b;
		printf("second Number =%d",b);
	}
	
	
     
	return 0;
}