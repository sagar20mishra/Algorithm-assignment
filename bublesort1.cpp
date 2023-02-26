#include<stdio.h>
#include<conio.h>
void bublesort(int a[20],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
			
			int temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			}
		}
	}
}
int main()
{
	int n;
	int a[20];
	printf("Enter no of elements in array");
	scanf("%d",&n);
	printf("Enter elemetns in array");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bublesort(a,n);
	for(int i=0;i<n;i++)
	{
		printf("  %d",a[i]);
	}
	return 0;
}