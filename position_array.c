#include<stdio.h>

int main()
{
	
	int n[100],a,i,b;
	printf("enter any number : ");
	scanf("%d",&a);
	printf("enter element :");
	for(i=0;i<a;i++)
	{
	 
	 scanf("%d",&n[i]);
		
    }
	printf("enter the value which you want position :");
	scanf("%d",&b);
    for(i=0;i<a;i++)
    {
    	if(n[i]==b)
		{
    		 printf("Position of %d is n[%d] ",n[i],i);
    		 
		}
    	
	}
	
		
	
		
}