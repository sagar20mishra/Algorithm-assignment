#include<stdio.h>
#include<conio.h>
int fun(int x,int y)
{
	if(x==0)
	{
		return y;
	}
	else
	{
		return fun(x-1,x+y);
	}
}
int main()
{
	printf("%d",fun(5,3));
	return 0;
}