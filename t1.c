#include<stdio.h>
int main()
{
		
int a,b,c,x,y,z,sum1,sum2;
char res;
printf("enter any 3 num =");
scanf("%d%d%d",&a,&b,&c);

sum1=a+b+c;
printf("sum1=%d\n",sum1);

printf("enter any 3 num =");
scanf("%d%d%d",&x,&y,&z);

sum2=x+y+z;
printf("sum2=%d\n",sum2);

  res=(sum1>sum2) ?  sum1 : sum2;
printf("%d",res);	
	return 0;
}