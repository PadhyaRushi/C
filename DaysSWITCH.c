#include<stdio.h>

int main()

{
	char choice;
	printf("ENTER ANY NUMBER BETWEEN 1 TO 7 : ");
	scanf("%c",&choice);
	
	switch(choice)
	{
		case '1' : printf("MONDAY");
		break;
		case '2' : printf("TUESDAY");
		break;
		case '3' : printf("WEDNESDAY");
		break;
		case '4' : printf("THURSDAY");
		break;
		case '5' : printf("FRIDAY");
		break;
		case '6' : printf("SATURDAY");
		break;
		case '7' : printf("SUNDAY");
		break;
		
		
		default :printf("SORRY.....!YOU ENTER INVALID NUMBER");
	}
	
	
	return 0;
	
}