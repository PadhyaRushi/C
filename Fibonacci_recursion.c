#include<stdio.h>

int fseries(int n)
{
	
	int n1, n2, sum;
	if(n>1)	
{
	n1=0;
	n2=1;
	sum=n1+n2;
	n1=n2;
	n2=sum;
	return fseries(n-1)+ fseries(n-2);
	
}	
}	
	
int main()	
{

  int a,s;
  printf("Enter Any Numbner :");     
  scanf("%d",&a);
  for(int i=0;i<=a;i++)
  {
     printf("%d  ",fseries(i));
  }
	return 0;
}