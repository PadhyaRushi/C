#include<stdio.h>

int main()
{
	int day,year,x,z;
	printf("ENTER YEAR:\n");
	scanf("%d",&year);
	printf("Number of days:\n");
	scanf("%d",&day);
	
	x=year*365;
	z=day/365;
	printf("DAY = %d Days in %d years\n",x,year);
	printf("YEAR = %d Years in %d Days",z,day);
   
	
	
	
return 0;	
	
}