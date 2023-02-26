#include<stdio.h>
#include<conio.h>
int fun(int n)
{
	int s=0;
	if(n==1)
	return n;
	s=n+fun(n-1);
	return s;
}
int main()
{
	printf("%d",fun(5));
	return 0;
}