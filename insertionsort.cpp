#include<stdio.h>
#include<stdlib.h>
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
	int a[20];
	int n;
	printf("Enter size of array");
	scanf("%d",&n);
	printf("Enter elements in array");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	insertionsort(a, n);
	printf("Sorted Array ");
	for(int i=0;i<=n;i++)
    {
    	printf(" %d",a[i]);
		}	
	return 0;
}