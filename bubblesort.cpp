#include<stdio.h>
#include<conio.h>
void bubblesort(int a[20], int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j+1]<a[j])
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
	int a[20];
	int n;
	printf("Enter no of elements in the array ");
	scanf("%d",&n);
	printf("Enter elements in array ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubblesort(a,n);
	printf("Sorted array ");
	for(int i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
	return 0;
}