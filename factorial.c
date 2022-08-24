#include<stdio.h>
int main()
{
	int fact,n;
	printf("ENTER ANY NUMBER:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
		
		
	}
	printf("%d",fact);
	return 0;
}