#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
	struct node*prev;
};
struct node*front=NULL;
struct node*rear=NULL;
void insertbeg(node*&front,int n)
{
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=n;
	if(front==NULL)
	{
	  	temp->next=NULL;
	  	temp->prev=NULL;
	  	front=temp;
	  	rear=front;
	}
	else
	{
		temp->next=front;
		temp->prev=NULL;
		front->prev=temp;
		front=temp;
		
	}
}
void insertlast(node*&rear,int n)
{
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=n;
	if(rear==NULL)
	{
		temp->next=NULL;
		temp->prev=NULL;
		rear=temp;
		front=rear;
		
	}
	else
	{
		rear->next=temp;
		temp->prev=rear;
		temp->next=NULL;
		rear=temp;
	}
}
void display(node*front,node*rear)
{
	if(front==NULL)
	{
		printf("Link list is empty");
	}
	else
	{
		struct node*temp;
		temp=(struct node*)malloc(sizeof(struct node));
		temp=front;
		printf("Linked list is ");
		while(temp!=NULL)
		{
			printf(" %d",temp->data);
			temp=temp->next;
		}
	}
}
int main()
{
	insertbeg(front,3);
	insertbeg(front,5);
	insertbeg(front,6);
	insertlast(rear,40);
	insertlast(rear,44);
	insertlast(rear,45);
	
	display(front,rear);
}