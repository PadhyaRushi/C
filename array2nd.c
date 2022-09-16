#include<stdio.h>
int main()
{
	int numbers[3] = {-6,6,1};
	
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
	
	if(numbers[x]>max)
	{
      y = max;
      max = numbers[x];
    }

    else if(numbers[x]<max && numbers[x]>y)
	{
      y = numbers[x];	
	}
	
    
    }printf("%d",y);
   
	return 0;
}