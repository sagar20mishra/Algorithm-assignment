#include<stdio.h>
#include<conio.h>
int main()
{
	 int n, a[n],i;
	 printf("Enter number of elements in the arrary");
	 scanf("%d",&n);
	 printf("Enter numbers in the array");
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 printf("Numbers in the array");
	 for(i=0;i<n;i++)
	 {
	 	printf("%d  ",a[i]);
	 }
	 
	 return 0;
}