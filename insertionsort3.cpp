#include<stdio.h>
#include<conio.h>
void insertionsort(int a[20],int n)
{   int j;
	for(int i=0;i<n;i++)
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
    int a[10]; int n;
    printf("Enter no of elements in array");
    scanf("%d",&n);
    printf("Enter elements in array");
    for(int i=0;i<n;i++){
    	scanf("%d",&a[i]);
	}
    insertionsort(a,n);
    printf("Sorted array");
    for(int i=0;i<n;i++)
    {
    	printf(" %d ",a[i]);
	}
    
	return 0;
}