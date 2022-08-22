#include<stdio.h>

int main()
{
	int chem,phy,math,total;
	float per1,per2,per3;
    printf("FIRST STUDENT\n");
	printf("Enter your three subject marks:");
	scanf("%d\n%d\n%d",&chem,&phy,&math);
	
	printf("Chem=%d\nphy=%d\nmath=%d",chem,phy,math);
	
    total=chem+phy+math;
	printf(" \ntotal = %d",total);	
	
	per1=total/3;
	printf(" \nPercentage = %f\n\n",per1);	
	printf("SECOND STUDENT\n");
		printf("Enter your three subject marks:");
	scanf("%d\n%d\n%d",&chem,&phy,&math);
	
	printf("Chem=%d\nphy=%d\nmath=%d",chem,phy,math);
	
    total=chem+phy+math;
	printf(" \ntotal = %d",total);	
	
	per2=total/3;
	printf(" \nPercentage = %f\n\n",per2);
	
	printf("THIRD STUDENT\n");
	printf("Enter your three subject marks:");
	scanf("%d\n%d\n%d",&chem,&phy,&math);
	
	printf("Chem=%d\nphy=%d\nmath=%d",chem,phy,math);
	
    total=chem+phy+math;
	printf(" \ntotal = %d",total);	
	
	per3=total/3;
	printf(" \nPercentage = %f\n\n",per3);
	
	if(per1>per2 && per1>per3)
	{
		printf("FIRST STUDENT",per1);
		
    }
    else if(per2>per3)
    {
    	printf("SECOND STUDENT",per2);
	}
	else
	{
			printf("THIRD STUDENT",per3);
	}

}
