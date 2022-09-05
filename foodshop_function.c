#include<stdio.h>

int pizza(int n)
{
	return 180*n;
}
int burger(int n)
{
	return 100*n;
}
int dosa(int n)
{
	return 120*n;
}
int idli(int n)
{
	return 50*n;
}

int main()
{
	
	int x,choice,c;
	printf("------------MENU-----------------\n");
	printf("1.Pizza         price = 180rs/pcs\n");
	printf("2.Burger        price = 100rs/pcs\n");
	printf("3.Dosa          price = 120rs/pcs\n");
	printf("4.Idli          price = 50rs/pcs\n\n");
	
	do{
	
      printf("Please Enter Your Choice :  \n");
      scanf("%d",&choice);
      
       switch(choice)
   {
   	 case 1: 
   	 printf("You Have Selected Pizza...\n");
   	 printf("Enter the quantity :");
   	 scanf("%d",&x);
   	 printf("\nAmount : %d\n",pizza(x));
   	 printf("Total Amount : %d",pizza(x));
   	 break;
   	 
   	 case 2: 
   	  printf("You Have Selected Burger...\n");
   	  printf("Enter the quantity :");
   	 scanf("%d",&x);
   	 printf("\nAmount : %d\n",burger(x));
   	 printf("Total Amount : %d",burger(x));
   	 break;
   	  
   	 case 3: 
   	  printf("You Have Selected Dosa...\n");
   	  printf("Enter the quantity :");
   	 scanf("%d",&x);
   	 printf("\nAmount : %d\n",dosa(x));
   	 printf("Total Amount : %d",dosa(x));
   	 break;
   	  
   	 case 4: 
   	 printf("You Have Selected Idli...\n");
   	 printf("Enter the quantity :");
   	 scanf("%d",&x);
   	 printf("\nAmount : %d\n",idli(x));
   	 printf("Total Amount : %d",idli(x));
   	 break;
   	 
 	default :
  	printf("\nInvalid Choice.....");
    }
    printf("\n\nDo you want place more order?? y/n  : ");
    scanf("%s",&c);
   
      
}while(c=='y' && c!='n' || c=='Y' && c!='N');
	
	return 0;
}

