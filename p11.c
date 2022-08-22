#include<stdio.h>

int main()
{
	int a;
	printf("ENTER NUMBER:");
	scanf("%d",&a);
	
	if(a/5 && a/11)
	{
		printf("%d IS DIVISABLE BY 5 AND 11",a);
	}
	else
	{
		 
	printf("%d IS NOT DIVISABLE BY 5 AND 11",a);
 
	}
	return 0;
	
}