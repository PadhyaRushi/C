#include<stdio.h>
int main()
{
	FILE *f1;
	char data[50];
	
	//********WRITE***************
    f1=fopen("C:/Users/Rushi/Desktop/test1.txt","w");
    printf("Enter data:\n");
	gets(data);
	fprintf(f1,"%s",data);
	fclose(f1);
    
	return 0;
}