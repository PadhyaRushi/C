#include<stdio.h>

int main()
{


    char op,choice;
    int a,b;
    float ans;

	
    
 do{
 	
    printf("Enter an operator(+,-,*,/):\n");
    scanf("%s",&op);
    
    printf("Enter First number\n:");
    scanf("%d",&a);
    printf("Enter Second number\n:");
    scanf("%d",&b);
 	
 	  
    if(op=='+')
    {
        ans=a+b;
        printf("ADDITION OF TWO NUMBER =%.0f\n",ans);
    	
	}
	else if(op=='-')
	{
		ans=a-b;
		printf("SUBTRACTION OF TWO NUMBER =%.0f\n",ans);
		
	}
	else if(op=='*')
	{
		ans=a*b;
		printf("MULTIPLICATION OF TWO NUMBER =%.0f\n",ans);
	}
	else if(op=='/')
	{
		ans=a/b;
		printf("DIVISION OF TWO NUMBER =%f\n",ans);
	}
	else
	{
		printf("INVALID INPUT.....!!\n");
	}
	
	 printf("\nWould you like to continue [Y/N] : ");
     scanf(" %c",&choice);
	

 }while(choice=='y' || choice=='n' && choice=='N' || choice=='Y');
    
   
return 0;
}