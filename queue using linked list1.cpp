#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *first=NULL;
struct node *last=NULL;
void enqueue(node*&last,int data)
{
	struct node *temp=NULL;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    if(last==NULL)
    {
    	last=temp;
    	last->next=NULL;
    	first=last;
	}
	else
	{
		last->next=temp;
		last=temp;
		last->next=NULL;
	}
	
}
void dequeue(node*first)
{
	if(first==NULL)
	{
		printf("queue is empty");
	}
	else
	{
		first=first->next;
	}
}
void display(node*first,node*last)
{
	struct node *temp=NULL;
    temp=(struct node*)malloc(sizeof(struct node));
    if(first==NULL)
    {
    	printf("Empty queue");
	}
	else
	{
        temp=first;
        printf("Values ");
        while(temp!=NULL)
        {
        	printf(" %d",temp->data);
        	temp=temp->next;
        	
			
		}
    }
}
int main()
{
//	int n;
	//printf("Enter 5 values in the queue");
	//for(int i=0;i<5;i++)
//	{
//	scanf("%d",&n);
	//enqueue(last,n);
   // }
	
	enqueue(last,8);
	enqueue(last,14);
	//enqueue(last,16);
	//enqueue(last,41);
//	dequeue(first);
	
	display(first,last);
	return 0;
}