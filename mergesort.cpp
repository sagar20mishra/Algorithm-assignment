#include<stdio.h>
#include<conio.h>
void merge(int a[],int l, int mid,int r)
{
	int i=l;
	int j=mid;
	int k=r;
	while(i<=mid && j<=r)
	{
		if(a[i]<a[j])
		{
			int b[k];
			 b[k]=a[i];
			i++;
		}
		else
		{
			int b[k];
			b[k]=a[j];
			j++;
		}
		k++;
	}
	if(i>mid)
	{
		while(j<=r)
		{
			int b[k];
			b[k]=a[j];
			j++;
			k++;
		}
		
	}
	else
	{
		while(i<=r)
		{
			int b[k];
			b[k]=a[i];
			i++;
			
		}
		k++;
	}
}
void mergesort(int a[],int l,int r)
{
	if(l<r)
	{
		int mid=(l+r)/2;
	    mergesort(a,l,mid);
	    mergesort(a,mid,r);
	    merge(a,l,mid,r);
	}
}

int main()
{
	int a[6]={5,70,9,12,8,10};
	
	mergesort(a,0,5);
	
	
	
	return 0;
}