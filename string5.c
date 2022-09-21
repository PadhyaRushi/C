#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	printf("Enter Your String : \n");
	gets(a);
	puts("You Entered This String :");
	puts(a);
	puts("Reverse of String :");

	puts(strrev(a));
	
	
	return 0;
}