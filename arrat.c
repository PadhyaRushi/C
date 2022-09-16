#include<stdio.h>
int main()
{
	int a[3] = {1433,20,45},b[3]={12,24,73};
	int x,temp[3]={};
	for(x=0;x<3;x++)
	{
		temp[x]=a[x];
		a[x]=b[x];
		b[x]=temp[x];	
	}
	for(x=0;x<3;x++)
	{
		printf("\nafter swap a[%d] = %d ",x,a[x]);	
	}
	
	printf("\n");
	for(x=0;x<3;x++)
	{
		printf("\nafter swap b[%d] = %d ",x,b[x]);	
	}
	
return 0;	
}
	
	
	
	
	
	
	
	
	