#include<stdio.h>
#include<conio.h>
void selectionsort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		int temp=a[i];
		a[i]=a[min];
		a[min]=temp;
		
		
	}
}

int main()
{
    int a[20]; int n;
    printf("Enter no of elements in array");
    scanf("%d",&n);
    printf("Enter elements in array");
    for(int i=0;i<n;i++){
    	scanf("%d",&a[i]);
	}
    selectionsort(a,n);
    printf("Sorted array");
    for(int i=0;i<n;i++)
    {
    	printf(" %d ",a[i]);
	}
    
	return 0;
}