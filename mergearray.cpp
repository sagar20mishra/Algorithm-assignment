#include<stdio.h>
#include<conio.h>
void merge(int a[], int n, int b[], int m)
{
	int i=0;
	int j=0;
	int k=0;
	int c[m+n];
	while(i<n&&j<m)
	{
		if(a[i]<=a[j])
		{
			c[k]=a[i];
			i++;
		}
		else
		{
			c[k]=b[j];
			j++;
		}
		k++;
	}
	if(i>n)
	{
		while(j<=m)
		{
			c[k]=b[j];
			j++;
			k++;
		}
	}
	else if(j>m)
	{
		while(i<=n)
		{
			c[k]=a[i];
			i++;
			k++;
		}
	}
a[k]=c[k];
}
int main()
{
	int a[20];
	int b[20];
	int n;
	int m;
	printf("Enter no of elements in array1 ");
	scanf("%d",&n);
	printf("Enter elements in array1 ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter no of elements in array2 ");
	scanf("%d",&m);
	printf("Enter elements in array2 ");
	for(int i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	merge(a,n,b,m);
	printf("merge array");
	for(int k=0;k<(n+m);k++)
	{
		printf(" %d ",a[k]);
	}
	return 0;
}
