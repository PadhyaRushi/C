#include<stdio.h>


int main()
{
	char a[100],i,j;
	
	printf("Enter Your String : \n");
	gets(a);
	puts("Your String :");
	puts(a);
	for(i=0;a[i];i++)
	{
		
	}
	printf("Length = %d \n",i);
	for(j=i-1;a[j];j--)
	{
		printf("%c ",a[j]);
	}
	
	return 0;
}