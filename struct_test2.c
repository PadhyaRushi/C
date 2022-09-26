#include<stdio.h>
	struct person 
	{
		int k;
		char c;
	};
int main()
{
    struct person p;
	p.k=8;
	printf("%d",p.k);
	
    return 0;	
}