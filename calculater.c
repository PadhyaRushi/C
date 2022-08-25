#include<stdio.h>

int main()
{


    char op,choice;
    int a,b;
    float ans;

	
    
 do{
 	
    printf("Enter an operator(+,-,*,/):\n");
    scanf("%s",&op);
    
    printf("Enter Fist number\n:");
    scanf("%d",&a);
    printf("Enter two number\n:");
    scanf("%d",&b);
 	
 	  
    if(op=='+')
    {
        ans=a+b;
        printf("SUM OF TWO NUMBER =%.0f\n",ans);
    	
	}
	else if(op=='-')
	{
		ans=a-b;
		printf("SUB OF TWO NUMBER =%.0f\n",ans);
		
	}
	else if(op=='*')
	{
		ans=a*b;
		 printf("MULTI OF TWO NUMBER =%.0f\n",ans);
	}
	else if(op=='/')
	{
		ans=a/b;
		printf("DIV OF TWO NUMBER =%f\n",ans);
	}

	else
	{
		printf("INVALID.....");
	}
	
	 printf("\nWould you like to continue [Y/N] : ");
     scanf(" %c",&choice);
	

 }while(choice=='y' || choice=='n' && choice=='N' || choice=='Y');
    
   
return 0;
}