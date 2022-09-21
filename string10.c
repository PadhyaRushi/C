#include<stdio.h>

int main()
{
	char a[100],i,c=0,d=0,s=0;
	puts("Enter Your String : ");
	gets(a);
//	puts("Your String : ");
//	puts(a);
	for(i=0;a[i];i++)
	{
		if(a[i]>='A'&&a[i]<='Z' || a[i]>='a'&&a[i]<='z')
		{
			c++;
				
		}
	   else if(a[i]>='0'&&a[i]<='9')
		{
			d++;
		}
		else
		{
			s++;
		}
	}
	printf("Alphabate in string => %d",c);
		printf("\nDigits in string => %d",d);
			printf("\nSpecial Character in string => %d",s);
}