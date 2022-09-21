#include<stdio.h>

int main()
{
	
	char a[100],i,max=0;
	puts("Enter Your String : ");
	gets(a);
	for(i=0;a[i];i++)
     {
     	max=0;
        if(a[i]>max)
		{
			max=a[i];
			max++;			
		}     	
     	
     	
	 }	
	 printf("max=%d	",max);
	
	return 0;
}