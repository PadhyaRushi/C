#include<stdio.h>

int main()
{
	char a[100],b[100],temp[100],i;
	
	puts("Enter Your String : ");
	gets(a);
	for(i=0;a[i];i++)
	{
		temp[i]=a[i];
		a[i]=b[i];
		b[i]=temp[i];
		
	}
	printf("%s",temp);
	
	return 0;
	
}