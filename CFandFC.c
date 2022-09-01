#include<stdio.h>

int main()
{
 
	float cf,fc,f,c;
	char choice,cho;
	do{
		printf("\nENTER YOUR CHOICE:");
		scanf("%s",&cho);
		
		switch(cho)
		{
		 case '1':
		 	printf("\nENTER TEMPERATURE TO CONVERT CELSIUS TO FAHRENHIT:\n");
		 		scanf("%f",&c);
		 		cf=(c*9/5)+32;
		 		printf("\nTEMPERATURE TO CONVERT CELSIUS TO FAHRENHIT IS = %f \n",cf);
		 		break;
		 		
		 		
		 case '2':
		 	printf("\n TEMPERATURE TO CONVERT FAHRENHIT TO CELSIUS :\n");
		 		scanf("%f",&f);
		 		fc=((f-32)*5)/9;
		 		printf("\nTEMPERATURE TO CONVERT FAHRENHIT TO CELSIUS IS = %f \n",fc);
		 		break;
		 		
		 		
		default:
			printf("\nTHANK YOUUU :)\n");
			
			
		}
	printf("\nWould you like to continue [Y/N] : ");
     scanf(" %c",&choice);
	
				
	}while(choice=='y' || choice=='n' && choice=='N' || choice=='Y');
	return 0;
}