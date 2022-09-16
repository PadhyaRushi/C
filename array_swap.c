#include<stdio.h>
int main()
{
	int a[3] = {1,2,3},b[3]={10,20,30};
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
	
	
	
	
	
	
	
	
	