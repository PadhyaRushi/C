#include<stdio.h>

int main()
{
	int num;
	char choice;
	
	do{
		printf("\nENTER NUMBER:");
		scanf("%d",&num);
		
		if(num==0)
		{
			printf("NUMBER IS ZERO....\n");
			
		}
		else if(num>0)
		{
			printf("NUMBER IS POSITIVE....\n");

		}
		else 
		{
			printf("NUMBER IS NEGATIVE....\n");

		}
		
		printf("\nDO YOU WANT TO CONTINUE[Y/y]:");
		fflush(stdin);
		scanf("%c",&choice);
		
	}while(choice=='Y' || choice=='y');
	
	return 0;
}