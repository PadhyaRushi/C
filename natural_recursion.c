//first 50 natural number using recursion

#include<stdio.h>

int fun(int x)
{
	if(x>0)
	{
    fun(x-1);
    	printf("%d\n",x);
    }

}


int main()
{

    
    fun(50);
	return 0;
}