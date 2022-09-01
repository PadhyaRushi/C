#include<stdio.h>

int main()
{
	int math,chem,phy,total,tm;
	char choice;
	do{
	
	printf("ENTER YOUR THREE SUBJECT MARKS: ");
	scanf("%d\n%d\n%d",&math,&chem,&phy);
	printf("Maths Marks =%d\n",math);
	printf("CHEM Marks =%d\n",chem);
	printf("PHY Marks =%d\n",phy);
	
	total=math+chem+phy;
	printf("GRAND TOTAL =%d\n",total);
	tm=math+phy;
	printf("TOTAL MARKS OF MATH AND PHY =%d\n",tm);
	
	if(math>=65 && phy>=55 && chem>=50 && total>=190 && tm>=140)
	{
		printf("CONGRATULATION...!! THE CANDIDATE IS ELIGABLE FOR ADMISSION\n\n");
	}
	else
	{
		printf("SORRY....!! THE CANDIDATE IS NOT ELIGABLE FOR ADMISSION\n\n");
	}
	
	printf("Do you want to continue:");
	scanf("%s",&choice);
    }while(choice=='Y' || choice=='y');
	return 0;
}