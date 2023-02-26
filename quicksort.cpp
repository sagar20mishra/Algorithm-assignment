#include<stdio.h>
#include<conio.h>
int partition(int a[20],int lb,int ub)
{
	int pivot=a[lb];
	int start=lb;
	int end=ub;
	while(start<end)
	{
		while(a[start]<=pivot)
		{
			start++;
		}
		while(a[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			int temp=a[start];
			a[start]=a[end];
			a[end]=temp;
		}
	}
	int temp=a[lb];
	a[lb]=a[end];
	a[end]=temp;
	return end;
}
void quicksort(int a[20],int lb,int ub)
{
	int loc;
	if(lb<ub)
	{
	  loc=partition(a,lb,ub);
	  quicksort(a,lb,loc-1);
	  quicksort(a,loc+1,ub);	
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
    quicksort(a,0,n-1);
    printf("Sorted array");
    for(int i=0;i<n;i++)
    {
    	printf(" %d ",a[i]);
	}
    
	return 0;
}