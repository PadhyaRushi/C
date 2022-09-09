#include<stdio.h>
int main(){
	int aray[]={1,2,3,4,5,6,7,8,9,10};
	int size ,sum=0;
	float avg;
	printf("enter 10 number= ");
	size=sizeof (aray)/sizeof (aray[0]);
	for(int i=0;i<size;i++){
//		scanf("%d",&aray[i]); with out sizeof user can input number like this
printf("%d ",aray[i]);
		sum=sum+aray[i];
		avg=sum/10.0;
	}
	printf("%d ",sum);
		printf("%f ",avg);
}