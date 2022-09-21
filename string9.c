#include<stdio.h>
#include<string.h>

int main()
{
	char a[100];
	
	puts("Enter Your String : ");
	gets(a);
	puts("Your String : ");
	puts(a);
    printf("String in UpperCase => %s",strupr(a));
    printf("\n");
    printf("String in Lowercase => %s",strlwr(a));
	return 0;
}