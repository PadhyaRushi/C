#include<stdio.h>
int main()
{
	int i,n,n1=0,n2=1,n3;
	printf("ENTER ANY TERMS OF FIBONACCI:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\n",n1);
		n3=n1+n2;
		n1=n2;
		n2=n3;
		
		
	}
	
	return 0;
}

