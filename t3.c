#include<stdio.h>
int main()
{
	int a,b,sq1,sq2;
	char res;
	printf("Enter two Number:");
	scanf("%d\n%d",&a,&b);
	
	sq1=a*a;
	printf("sq1 = %d\n",sq1);
	sq2=b*b;
	printf("sq2 = %d\n",sq2);
	
	res=(sq1>sq2) ?  'T': 'F';
printf("%c",res);	
	return 0;
	
	
}