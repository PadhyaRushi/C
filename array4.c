#include<stdio.h>
int main()
{
	int numbers[3] = {185,25,14};
	
 	int x,y=1,max =numbers[0];
	for(x=0;x<3;x++)
	{
		if(max<numbers[x])
		{
			max = numbers[x]; 
	    }
	}
	
	printf(" Maximum Number :- %d\n",max);
    for(x=0;x<3;x++)
    {
    	if(numbers[x]<max || y>max)
    	{
    	 y = numbers[x];	
		}
    	
	}
	printf("%d",y);
    
	
   
	return 0;
}