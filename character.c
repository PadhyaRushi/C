#include<stdio.h>

int main()
{
	char a;
	
	printf("Enter any key:\n");
	scanf("%c",&a);
	
	if(a>='A' && a<='Z'|| a>='a' && a<='z')
	{
		printf("%c is an alphabate",a);
	}
	else if(a>='0' && a<='9')
	{
		printf("%c is a Number",a);
	}
	else
	{
	    printf("special Character");
	}
	return 0;
}