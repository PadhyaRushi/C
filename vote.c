#include<stdio.h>

int main()
{
	int a;
	printf("ENTER YOUR AGE: ");
	scanf("%d",&a);
	
	if(a>=18)
	{
		printf("Congratulation..! You are eligable for casting your vote");
	}
	else
	{
			printf("sorry..! You are not eligable for casting your vote");
	}
	return 0;
	
}