#include<stdio.h>
#include<conio.h>
struct node
   {
		int data;
		struct node*next;
	};
	struct node *first=NULL;
	struct node *last=NULL;
void insert(int a)
{
	struct node *temp;
	temp->data=a;
	if(first==NULL)
	{
		first=last=temp;
		temp->next=NULL;
	}
	else
	{
		last->next=temp;
		temp->next=NULL;
		last=temp;
	}
	
}
void display()
{
	struct node*temp;
	if(first==NULL)
	{
		printf("Linked list is empty");
	}
	else if(first==last)
	{
		printf("%d\n",first->data);
	}
	else
	{
		printf("Elements of linked list");
		for(temp=first;temp!=last;temp=temp->next)
		{
			printf(" %d\n",temp->data);
			
		}
		printf(" %d",last->data);
	}
}
int main()
{
	 insert(5);
	 insert(7);
	 display();
	 getch();
return 0;
	
}