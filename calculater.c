#include<stdio.h>

int main()

{
	char op;
    int a,b;
    float ans;
    printf("Enter an operator(+,-,*,/):");
    scanf("%c",&op);
    printf("Enter two number :");
    scanf("%d %d",&a,&b);
    
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

    
   
	
	
	
	
}