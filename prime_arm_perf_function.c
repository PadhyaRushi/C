#include<stdio.h>

int getprime(int x)
{
	int count=0,i;
for(int i=1;i<=x;i++)
	
	{
		if(x%i==0)
		{ 	
		
		count++;
		
		}
	}
	
	return count==2;	
}

int getarm(int x)
{
	int r,result=0,c;
	c=x;
	while(x>0)
	{
		r=x%10;
		result=result+(r*r*r);
		x=x/10;
	}
	
	return c==result;	
}

int getperfact(int x)
{
	int sum=0;
  for(int i=1;i<x;i++)
  {
  	if(x%i==0)
  	{
  		sum=sum+i;
	}
  }
  return x==sum;	
}



int main()
{
	int n,choice,c;
	printf("********OPERATION**********\n");
	    printf("Choice 1 = For Check Number is prime or not...\nChoice 2 = For Check Number is Armstrong or not...\nChoice 3 = For Check Number is Perfact or not...\n");
	do{
	    
	    printf("\nEnter Your Choice:");
		scanf("%d",&choice);


		printf("\nEnter any Number:");
		scanf("%d",&n);
		
		switch(choice){
		
		    case 1:if(getprime(n))
                    {
                   	printf("Its Prime...\n");
					}
					else	
					{
                   	printf("Its not Prime...\n");
                   	}
                   	break;
					    
					
		    case 2:if(getarm(n))
                    {
                   	printf("Its Armstrong Number...\n");
					}
					else	
					{
                   	printf("Its not Armstrong Number...\n");
                   	}
                   	break;
						    
	        case 3:if(getperfact(n))
                    {
                   	printf("Its Perfact Number...\n");
					}
					else	
					{
                   	printf("Its not Perfact Number...\n");
                   	}
                   	break;
            default:printf("Invalid Choice.....!!");     	
                   	
       }
                   	printf("\n\nWould You Like To Continue : ");
                   	scanf("%s",&c);
}while(c=='y'&&c!='n' || c=='Y'&&c=='N');

	return 0;
}