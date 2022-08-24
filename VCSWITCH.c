#include<stdio.h>

int main()

{
	char choice;
	printf("Enter Any Alphabate: ");
	scanf("%c",&choice);
	
	switch(choice)
	{
		case 'A' : printf("THIS CHARACTER IS VOWEL");
		break;
		case 'E' : printf("THIS CHARACTER IS VOWEL");
		break;
		case 'I' : printf("THIS CHARACTER IS VOWEL");
		break;
		case 'O' : printf("THIS CHARACTER IS VOWEL");
		break;
		case 'U' : printf("THIS CHARACTER IS VOWEL");
		break;
		case 'a' : printf("THIS CHARACTER IS VOWEL");
		break;
		case 'e' : printf("THIS CHARACTER IS VOWEL");
		break;
		case 'i' : printf("THIS CHARACTER IS VOWEL");
		break;
		case 'o' : printf("THIS CHARACTER IS VOWEL");
		break;
		case 'u' : printf("THIS CHARACTER IS VOWEL");
		break;
		
		default :printf("THIS CHARACTER IS CONSTANT");
	}
	
	
	return 0;
	
}