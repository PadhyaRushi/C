#include<stdio.h>

int main()
{
	int day,year=365,week=7,x,y,z;
	printf("Number of days:\n");
	scanf("%d",&day);
	
    x=day/365;
	y=(day%365)/7;
	z=(day%365)%7;
	printf("year=%d\nweeks=%d\nDays=%d",x,y,z);
	
	
return 0;	
	
}