#include<stdio.H>

int main()
{
	int id,hrs;
    float salary,sh;
	
	printf("The Employee ID(Max.10 chars) :\n");
	scanf("%d",&id);
	
	printf("Working Hours:\n");
	scanf ("%d",&hrs);
	
	printf("Salary/hrs:\n");
	scanf("%f",&salary);
	
	sh=salary*hrs;
	
    printf("Employees ID = %d",id);
    printf("\nSalary = U$ %.2f",sh);
	
	return 0;
}