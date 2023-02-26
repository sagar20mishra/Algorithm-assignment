#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *left, *right;
};
struct node*root=NULL;
void insert(node*root,int data)
{
	struct node *t=(struct node*)malloc(sizeof(struct node));
	
}