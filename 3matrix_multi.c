#include<stdio.h>
int main()
{
	
	int a[2][2],b[2][2],c[2][2],row,col,mul[2][2],mul1[2][2],x;
	
	printf("Enter first array :\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			scanf("%d",&a[row][col]);
		}
	}
	printf("\nfirst array :\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf("%d ",a[row][col]);
		}
		printf("\n");
	}
	
	
	printf("\nEnter second array :\n");
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			scanf("%d",&b[row][col]);
		}
	}
	
		printf("\nSecond array :\n");
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf("%d ",b[row][col]);
		}
		printf("\n");
      }
	printf("\nEnter Third array :\n");
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			scanf("%d",&c[row][col]);
		}
	}
	
		printf("\nThird array :\n");
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf("%d ",c[row][col]);
		}
		printf("\n");
	}
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			mul[row][col] =0;
			for(x=0;x<2;x++)
			{
				
				mul[row][col] = mul[row][col] +	a[row][x] * b[x][col];
				
			
			}
			
		}
		printf("\n");
	}
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			mul1[row][col] =0;
			for(x=0;x<2;x++)
			{
				
				mul1[row][col] = mul1[row][col] +	mul[row][x] * c[x][col] ;
				
			
			}
			
		}
		printf("\n");
	}
		printf("Resulting of 3 array :\n");
	
		for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf("%d ",mul1[row][col]);
		}
		printf("\n");
	}
	
	return 0 ;
	

}