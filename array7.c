#include<stdio.h>


int main()

{
	int a[2][2],sum=0,i,j;
	
	printf("enter your number : \n");
	
	for( i=0;i<2;i++)
	{
		for( j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);	
		}
	}
	
	for( i=0;i<2;i++)
	{
	   for( j=0;j<2;j++);
	   {
	   	  sum=sum+a[i][j];    
	   }
	 //  printf("\n");
	   
	}
		printf("Sum => %d",sum);

	return 0;
}