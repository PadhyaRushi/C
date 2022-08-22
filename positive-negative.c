#include<stdio.h>
void main()
{
    int n;
    printf("Enter The Number :-\n");
    scanf("%d",&n);
    if(n>0)
    printf("%d is a Positive Number",n);
    else if(n<0)
    printf("%d is a Negative Number",n);
    else
    printf("0 is neither positive nor negative");
    
}