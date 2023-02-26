#include<stdio.h>
#include<conio.h>
void insertionsort(int a[20],int n)
{
	int j;
	for(int i=1;i<n;i++)
	{
		int temp=a[i];
		for(j=i-1;j>=0&&temp<a[j];j--)
		{
			a[j+1]=a[j];
		}
		a[j+1]=temp;
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
	insertionsort(a,n);
	for(int i=0;i<n;i++)
	{
		printf("  %d",a[i]);
	}
	return 0;
}