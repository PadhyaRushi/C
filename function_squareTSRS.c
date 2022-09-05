// Find square Take Something Return Something 

#include<stdio.h>

int square(int x)
{
	int s;
	s=x*x;
	return s;
	
}

int main()
{
   int a,y;
   printf("Enter any Number:");
   scanf("%d",&a);
   y=square(a);
   printf("Square of Number = %d",y);
   return 0;
  		
}