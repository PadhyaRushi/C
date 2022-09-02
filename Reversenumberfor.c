#include<stdio.h>
int main()
{
	
 int num,rem,rNum=0;
    printf("Enter the Integer number:");
    scanf("%d",&num);

    while(num>0)
    {
       rem=num%10;
        rNum = rNum*10+rem;
        num=num/10;    
    }
    printf("Reverse of the given number is :%d",rNum);
    return 0;
    
}
