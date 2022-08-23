#include<stdio.h>

int main()
{
	int r;
	float circle,Rectangle,triangle,w,l,h,b;
	printf("Enter Radius:\n");
	scanf("%d",&r);
	
	circle=3.14*r*r;
	printf("Area of circle = %f\n",circle);
	
	printf("\nEnter Length and Width:\n");
	scanf("%f\n%f",&w,&l);
	
	Rectangle=w*l;
	printf("Area of Rectangle = %.2f\n",Rectangle);
	
	printf("\nEnter Base and Width:\n");
	scanf("%f\n%f",&b,&h);
	
	triangle=h*b/2;
	printf("Area of triangle = %.2f",triangle);
	
	
	return 0;
	
}