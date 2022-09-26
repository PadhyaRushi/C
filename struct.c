#include<stdio.h>
#include<string.h>

struct stud
{
	
	int rn;
	char name[100];
	int marks[6];
};

int main()
{
	struct stud s;
	
	float sum=0,per=0;
    char c;
    
	do{
	
	printf("Enter Your Roll Number : ");
	scanf("%d",&s.rn);
	printf("Enter Your Name :\n");
	scanf("%s",s.name);
	printf("Enter Your 6 Subject Marks :\n");
	for(int i=0;i<6;i++)
	{
			scanf("%d",&s.marks[i]);
			
	}
	for(int i=0;i<6;i++)
	{
	     	sum = sum + s.marks[i];
	     	
    }
	per=sum/6;
	printf("Student Roll Number : %d",s.rn);
	printf("\nStudent Name : %s",s.name);
	printf("\nTotal Marks = %.0f\n",sum);
	printf("Percentage = %.2f",per);
	if(per>=80 && per<=90)
	{
			printf("\nCongratulation You Get A Grade...");
	}
	else if(per>=60 && per<80 )
    {
     		printf("\nCongratulation You Get B Grade...");
	}
	else if(per>=45 && per<60 )
    {
     		printf("\nCongratulation You Get C Grade...");
	}
	else
	{
		printf("\nSorry.....You are Failed");
	}
	
	printf("\n\nWant To Calculate Your Result[Y/N] :\n");
	scanf("%s",&c);
	
}while(c=='Y'&&c=='y' || c!='n'&&c!='N');

	return 0;
}