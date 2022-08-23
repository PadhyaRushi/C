#include<stdio.h>
int main()
{
	
	int first,second;
	
      printf("ENTER ANY TWO NUMBER:\n");
      scanf("%d\n%d",&first,&second);
	  printf("Before Swapping value:\n First Number=%d\n Second Number=%d\n",first,second);	
      
	first = first+second;  
	second = first-second;
	first = first-second; 
	
	 printf("After Swapping value:\n First Number=%d\n Second Number=%d\n",first,second);	
	return 0;
}