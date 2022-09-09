#include<stdio.h>

int main()

{
	int a[10],n;
	printf("ENTER ANY 10 NUMBERS : ");
    	
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<10;i++)
	{
		
		printf("%d   ",a[i]);
	}
	printf("\n\n");
	for(int i=9;i>=0;i--)
	{
		printf("%d   ",a[i]);
	}
	return 0;
}