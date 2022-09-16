#include<stdio.h>

int main()

{
	int n,a[100],b[100],sum[100];
	char choice,c;
	do{
		printf("Enter Your Choice :");
    scanf("%s",&choice);
    
	
	printf("Enter How many element do you want in your First array :\n");
	scanf("%d",&n);
	printf("Enter Number Of Element in First Array:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	printf("You are enter this elements in first array : \n");
	for(int j=0;j<n;j++)
	{
 		printf("%d  \n",a[j]);
    }
	printf("Enter How many element do you want in your Second array :\n");
	scanf("%d",&n);
	printf("Enter Number Of Element in Second Array:\n");
	for(int i=0;i<n;i++)
	{
		scanf("\n%d",&b[i]);
	}
		printf("You are enter this elements in second array : \n");
    for(int j=0;j<n;j++)
	{
 		printf("%d\n",b[j]);
    }
    
    
    
    switch(choice)
    {
	
    case '+':
    
	
     for(int j=0;j<n;j++)
	{
 		sum[j]=a[j]+b[j];
    }
   	printf("Addition of Array elements :\n");
    for(int j=0;j<n;j++)
	{
 		printf("%d\n",sum[j]);
    }
    break;

    
   
    case '-':
    	
		
    	 for(int j=0;j<n;j++)
	{
 		sum[j]=a[j]-b[j];
    }
    	printf("Subtraction of Array elements :\n");
     for(int j=0;j<n;j++)
	{
 		printf("%d\n",sum[j]);
    }
     break;
    
    case '*':
    	 for(int j=0;j<n;j++)
	{
 		sum[j]=a[j]*b[j];
    }
    	printf("Multiplication of Array elements :\n");
     for(int j=0;j<n;j++)
	{
 		printf("%d\n",sum[j]);
    }
     break;
    
    case '/':
    	
     for(int j=0;j<n;j++)
	{
 		sum[j]=a[j]/b[j];
    }
    	printf("Division of Array elements :\n");
     for(int j=0;j<n;j++)
	{
 		printf("%d\n",sum[j]);
    }
     break;
    
    default : printf("Invalid Choice.....");
}
    
 printf("\nWould you like to continue [Y/N] : ");
     scanf("%s",&c);
	

    }while(c=='y' || c=='n' && c=='N' || c=='Y');
    
    return 0;	
}