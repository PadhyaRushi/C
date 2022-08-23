#include<stdio.H>

int main()
{
	int id,hrs;
    float salary=15000,sh;
	
	printf("The Employee ID(Max.10 chars) :\n");
	scanf("%d",&id);
	
	printf("Working Hours:\n");
	scanf ("%d",&hrs);
	
	sh=salary*hrs;
	
    printf("Employees ID = %d",id);
    printf("\nSalary = U$ %.2f",sh);
	
	return 0;
}