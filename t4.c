#include<stdio.h>

int main()
{
	int a,b,c;
	char res;
	scanf("%d\n%d\n%d",&a,&b,&c);

	res= 	(a<b && a<c) ? a   :   (b<c) ? b: c;


  printf("\n%d",res);
	return 0;
	
}