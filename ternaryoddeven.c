#include<stdio.h>

int main()
{
    int a;
	char ans;
	printf("Enter Any Number: ");
	scanf("%d",&a);
	
   ans=(a%2==0)?'E':'O';
	
	printf("RESULT= %c",ans);
	
	
	
	
	return 0;
	
}