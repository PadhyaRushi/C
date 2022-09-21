#include<stdio.h>


int main()
{
	char a[100],i,count=0;
	puts("Enter Your String : ");
	gets(a);
	puts("Your String :");
	puts(a);
	
	for(i=0;a[i];i++)
	{
		if(a[i]==' ')
		{
			count++;
		}
		
	}
	printf("Words in String => %d",count+1);
	
	return 0;
}