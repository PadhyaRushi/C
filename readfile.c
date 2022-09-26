#include<stdio.h>
#include<string.h>
int main()
{
	FILE *f2;
	char data[50];
	
	//********READ***************
	f2=fopen("C:/Users/Rushi/Desktop/test2.txt","r");
	fscanf(f2,"%s",&data);
	printf("%s",data);
	fclose(f2);
	
	return 0;

}