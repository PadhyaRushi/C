#include<stdio.h>

int main()
{
	char a[100],vowel=0,cons=0,i,s=0;
	puts("Enter Your String : ");
	gets(a);
	for(i=0;a[i];i++)
	{
		
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u' || a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
		{
			vowel++;
		}
		else if(a[i]==' ')
		{
			s--;
		}
		else
		{
			cons++;
		}
	
	}
		printf("Vowels in string = %d",vowel);
		printf("\nConstant in string = %d",cons);
	return 0;
}