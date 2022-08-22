#include<stdio.h>

int main()
{
	float w1,w2,item1,item2,avrg;
	
	printf("Enter the weight of iteam1 & item2:\n");
	scanf("%f\n%f",&w1,&w2);
	
	
	
	printf("Enter the purchase of iteam1 & item2:\n");
	scanf("%f\n%f",&item1,&item2);
	
	avrg=((w1*item1)+(w2*item2))/(item1+item2);
	
	printf("average=%.2f",avrg);
	return 0;
	
}