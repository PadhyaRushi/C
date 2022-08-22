#include<stdio.h>

int main()
{
	char ch;
	printf("enter any alphabate:");
	scanf("%c",&ch);
	
	
	 if(ch=='a' || ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A' || ch=='E'|| ch=='I'||ch =='O'||ch=='U')
	{
		printf("%c is vowel ",ch);
	}
	else if((ch>='A'&& ch<='Z' )||(ch>='a'&& ch<='z'))
	{
		printf("%c is constant",ch);
	}
	else
	{
		printf("%c is not alphabate",ch);
	}
	return 0;
}