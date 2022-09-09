#include<stdio.h>

int main()
{
	int n[5],sum=0;
	
	printf("Enter any 5 values:\n");
	
	for(int i=0;i<5;i++)
   {
        scanf("%d",&n[i]);
		sum=sum+n[i];  	
   	
   	
   }
   printf("Sum of 5 Number => %d ",sum);	
	
	
	
	
	return 0;
}