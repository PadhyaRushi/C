#include<stdio.h>
int main()
{
   int n1,n2,n3;
    printf("Enter the First Number:");
    scanf("%d",&n1);
     printf("Enter the Second Number:");
    scanf("%d",&n2);
     printf("Enter the third Number:");
    scanf("%d",&n3);

    if(n1 >= n2 && n1>= n3)
    {
         printf("The largest number = %d",n1);
    }
     if(n2 >= n1 && n2>= n3)
    {
         printf("The largest number = %d",n2);
    }
     if(n3 >= n1 && n3>= n2)
    {
         printf("The largest number = %d",n3);
    }
    
    
    return 0;
}
    