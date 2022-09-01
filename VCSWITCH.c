#include<stdio.h>

int main()

{
	char choice,a;
	do{
	
	printf("\nEnter Any Alphabate: ");
	scanf("%s",&choice);
	
	switch(choice)
	{
		case 'A' : printf("\nTHIS CHARACTER IS VOWEL");
		break;
		case 'E' : printf("\nTHIS CHARACTER IS VOWEL");
		break;
		case 'I' : printf("\nTHIS CHARACTER IS VOWEL");
		break;
		case 'O' : printf("\nTHIS CHARACTER IS VOWEL");
		break;
		case 'U' : printf("\nTHIS CHARACTER IS VOWEL");
		break;
		case 'a' : printf("\nTHIS CHARACTER IS VOWEL");
		break;
		case 'e' : printf("\nTHIS CHARACTER IS VOWEL");
		break;
		case 'i' : printf("\nTHIS CHARACTER IS VOWEL");
		break;
		case 'o' : printf("\nTHIS CHARACTER IS VOWEL");
		break;
		case 'u' : printf("\nTHIS CHARACTER IS VOWEL");
		break;
		
		default :printf("\nTHIS CHARACTER IS CONSTANT");
	}
		printf("\nDO YOU WANT TO CONTINUE[Y/y]:");
		fflush(stdin);
		scanf("%c",&a);
}while(a=='Y' ||a=='y');
	
	return 0;
	
}