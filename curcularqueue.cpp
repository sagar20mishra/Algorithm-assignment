#include<stdio.h>
#include<conio.h>
void enqueue(int a[],int n,int rear)
{
	if(rear==n-1)
	{
		printf("queue overflow");
	}
	else
	{
		rear++;
		a[rear]=n;
	}
}
void dequeue(int a[],int n,int rear)
{
	if(rear==-1)
	{
		printf("queue underflow");
	}
	else
	{
		int temp=a[rear];
		for(int i=0;i<n;i++)
		{
			a[i]=a[i+1];
		}
		rear--;
		printf("Dequeued element %d",temp);
	}
}
int main()
{   int a[20];
	int n;
	printf("Enter length of circular queue");
	scanf("%d",&n);
	int rear=-1;
//	enqueue(a,5,rear);
	for(int i=0;i<rear;i++)
	{
		printf(" %d ",a[i]);
	}
	return 0;
}