#include<stdio.h>

int main()
{
	int a,b,c,interest;
	
	printf("Enter RATE,AMOUNT,TIME = \n");
	scanf("%d\n%d\n%d",&a,&b,&c);
	
	interest=a*b*c/100;
	
	printf("RATE OF INTEREST: %d%\n",a);
	printf("AMOUNT : %d\n",b);
	printf("TIME : %d MONTHS\n",c);
	printf("Interest is = %d",interest);
	
	
	return 0;
	
}