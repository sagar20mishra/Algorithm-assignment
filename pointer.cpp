#include<stdio.h>
#include<conio.h>
int main()
{
int x=100;
int *p=&x;

printf("%d\n",x);
*p=20;
x=40;
printf("%d",*p);

return 0;	
}