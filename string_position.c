#include<stdio.h>

int main()
{
	
	char n[100],a,i;
	printf("Enter Your String : \n");
	gets(n);
	puts("Your String :");
	puts(n);
	printf("enter the char of string :");
	scanf("%c",&a);
    for(i=0;i<a;i++)
    {
    	if(n[i]==a)
		{
    		 printf("Position of %c => n[%d] ",n[i],i);
    		 
		}
    	
	}
		
}