//Swap Using function Take Nothing Return Nothing
#include<stdio.h>

void swap()
{
	int a,b;
	printf("Enter First and Second  Number :");
	scanf("%d\n%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swap \n a = %d \n b = %d",a,b);
}
int main()
{
	swap();
	return 0;
}