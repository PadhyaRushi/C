#include<stdio.h>

float getdiemeter(float r) {
	return 2*r;
}
float getcircum(float r) {
	return 2*3.14*r;
}
float getcircle(float r) {
	return 3.14*r*r;
}

int main() {
	int n, c;
	char choice;
	do {

		printf("ENTER YOUR CHOICE:\n");
		scanf("%d",&c);

		printf("ENTER RADIUS :\n ");
		scanf("%d",&n);

		switch(c) {
			case 1:
				printf("\nDieameter = %f",getdiemeter(n));
				break;

			case 2:
				printf("\nCircumference = %f",getcircum(n));
				break;

			case 3:
				printf("\nArea of Circle = %f",getcircle(n));
				break;

			default:
				printf("Invalid Choice....\n");

		}
		printf("\nWould You Like To Continue :");
		scanf("%s",&choice);
	} while(choice=='y'&&choice=='Y'||choice!='n'&&choice!='N');
}