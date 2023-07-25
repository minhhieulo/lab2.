#include<stdio.h>
int main()
{
   int i,j,n;
    
    	for(i=1;i<10;i++)
    	{
    		for(j=1;j<10;j++)
    		{
    			if (i*j==2*(i+j))
    			{
    				n=10*i+j;
    				printf(" %d \t",n);
    			}
    		}
    	}
    
    	return 0;
}
