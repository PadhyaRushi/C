#include<stdio.h>

int main()

{
    int a[2][2],b[2][2];
    char c;
    
    printf("Enter Your Choice :-\n");
    scanf("%c",&c);
    
    for(int i=0;i<2;i++)
    {
    	for(int j=0;j<2;j++)
    	{
    		scanf("%d",&a[i][j]);	
		}
    	
	}
	for(int i=0;i<2;i++)
    {
    	for(int j=0;j<2;j++)
    	{
    		printf("%d  ",a[i][j]);
    		
    		
		}
    printf("\n");	
	}
	
//-----------------------------------------------------------------//
	
	for(int i=0;i<2;i++)
    {
    	for(int j=0;j<2;j++)
    	{
    		scanf("%d",&b[i][j]);	
		}
    	
	}
	for(int i=0;i<2;i++)
    {
    	for(int j=0;j<2;j++)
    	{
    	
     		printf("%d  ",b[i][j]);
   		
		}
    printf("\n");	
	}
	
//----------------------------------------------------------------------------//
	
	switch(c){
	
 case '+':
 	
	for(int i=0;i<2;i++)
    {
    	for(int j=0;j<2;j++)
    	{
    	
     		printf("%d  ",a[i][j]+b[i][j]);
   		
		}
    printf("\n");	
	}
	break;
	
 case '-':
 	
 	for(int i=0;i<2;i++)
    {
    	for(int j=0;j<2;j++)
    	{
    	
     		printf("%d  ",a[i][j]-b[i][j]);
   		
		}
    printf("\n");	
	}
		break;
	
	
	
 case '*':
 
 	for(int i=0;i<2;i++)
    {
    	for(int j=0;j<2;j++)
    	{
    	
     		printf("%d  ",a[i][j]*b[i][j]);
   		
		}
    printf("\n");	
	}	
		break;
	
	
  case '/':
  	
  		for(int i=0;i<2;i++)
    {
    	for(int j=0;j<2;j++)
    	{
    	
     		printf("%f  ",a[i][j]/b[i][j]);
   		
		}
    printf("\n");	
	}	
		break;
	
   default : 
   printf("invalid choice");
  	break;
	
}

return 0;


}