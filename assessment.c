#include<stdio.h>

int calculater()
{
	int first,second;
	char op,choice;
	do{
	
   printf("\n---------------Menu---------------\n");
   printf("1.Addition\n");
   printf("2.Subtraction\n");
   printf("3.Multiplication\n");
   printf("4.Division\n"); 
   
   printf("\nEnter Your choice :");
   scanf("%s",&op);
   
   printf("\nEnter first number :");
   scanf("%d",&first);
   printf("Enter second number :");
   scanf("%d",&second);
   
   switch(op)
   {
   	 case '1': 
   	 printf("\nAddition : %d\n",first+second);
   	 break;
   	 
   	 case '2': 
   	 printf("\nSubtraction : %d\n",first-second);
   	 break;
   	  
   	 case '3': 
   	 printf("\nMultiplication : %d\n",first*second);
   	 break;
   	  
   	 case '4': 
   	 printf("\nDivision : %.2f\n",first/second);
   	 break;
   	 
   	
   	default :
   		printf("\nInvalid Choice.....");
   }
   
   	 printf("\nWould you like to continue [Y/N] : ");
     scanf(" %c",&choice);
     
}while(choice=='y' || choice=='n' && choice=='N' || choice=='Y');
    
	
}

int main()
{
	
    calculater();
   return 0;	
}
