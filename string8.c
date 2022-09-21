#include<stdio.h>

int main()
{
	char a[100],b[100],i,j;
	puts("Enter Your First String : ");
	gets(a);
//	puts("Your String :");
//	puts(a);
	puts("Enter Your second String : ");
	gets(b);
//	puts("Your String :");
//	puts(b);
	
	for(i=0;a[i];i++)
	{
		for(j=0;b[j];j++)
		  {
			if(a[i]==b[j])
			{
				
				printf("STRINGS ARE EQUAL...");
			}
			else
			{
					printf("STRINGS ARE NOT EQUAL...");
			}
			
		  }
		
	}
	return 0;
}