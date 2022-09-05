#include<stdio.h>

int sum(int a,int b)
{
	return a+b;
	
}
int sub(int a,int b)
{
	return a-b;
	
}
int multi(int a,int b)
{
	return a*b;
	
}
int div(int a,int b)
{
	return a/b;
	
}

int main()
{
	int x,y,choice;
	char c;
	printf("------------MENU-------------\n");
	printf("1. ADDITION\n");
	printf("2. SUBTRACTION\n");
	printf("3. MULTIPLICATION\n");
	printf("4. DIVISION\n");
	
	do{
	
		
		
   printf("\nEnter Your choice :");
   scanf("%d",&choice);
   
   printf("\nEnter First Number :");
   scanf("%d",&x);
   printf("Enter Second number :");
   scanf("%d",&y);
   
   
   switch(choice)
   {
   	 case 1: 
   	 
   	 printf("\nAddition : %d\n",sum(x,y));
   	 break;
   	 
   	 case 2: 
   	 printf("\nSubtraction : %d\n",sub(x,y));
   	 break;
   	  
   	 case 3: 
   	 printf("\nMultiplication : %d\n",multi(x,y));
   	 break;
   	  
   	 case 4: 
   	 printf("\nDivision : %d\n",div(x,y));
   	 break;
   	 
 	default :
  	printf("\nInvalid Choice.....");
    }
    
   printf("\nWould you like to continue  : ");
   scanf("%s",&c);
   
   
   
	}while(c=='y' && c!='n' || c=='Y' && c!='N');
	
	return 0;
	

}