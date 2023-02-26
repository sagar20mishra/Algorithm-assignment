#include<stdio.h>
#include<conio.h>
int main()
{
    for(int i=0;i<10;i++)
    {
    	for(int j=0;j<10;j++)
    	{
    		if(i+j<=9)
    		{
    			printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}