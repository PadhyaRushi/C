#include<stdio.h>

int main()
{
    int income,year;
	printf("ENTER YOUR MONTHLY INCOME:\n");
	scanf("%d",&income);
	
	year=income*12;
	
	printf("YEARLY INCOME:%d\n",year);
	
	if(year<=250000)
	{
		printf("YOUR INCOMETEX =0");
	}
	return 0;
}