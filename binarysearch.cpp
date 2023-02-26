#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20];
	int n; int  temp=0;int key;
	printf("Enter no of elements in array");
	scanf("%d",&n);
	printf("Enter elements in array");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element to be searched");
	scanf("%d",&key);
	for(int i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			temp=1;
			printf("%d element found at %d location.",key,i+1);
		}
	}
	if(temp==0)
	{
		printf("Element not found");
	}
	return 0;
}