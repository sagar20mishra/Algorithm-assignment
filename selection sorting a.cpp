#include<stdio.h>
#include<conio.h>
void display_result(int arr[],int size)	{			
 int i;
 printf("the array after sorting is\n");
 for(i=0;i<size;i++) {
  printf("%d\t",arr[i]); } }
void selection_sort(int arr[],int n) {      	  			
 int temp,i,j,min_idx;
 for(i=0;i<n;i++) {
  min_idx=i;
  for(j=i;j<n;j++) {
 if(arr[j]<arr[min_idx]) {
    min_idx=j;
    temp=arr[min_idx];
    arr[min_idx]=arr[i];
    arr[i]=temp;  } } }
 display_result(arr,n); }
void arrayin(int size)  { int arr[6],i;                			
printf("enter the array\n");
 for(i=0;i<size;i++) {
  scanf("%d",&arr[i]); }
 selection_sort(arr,size); }
int main() {
 int n;
printf("enter the size of array\n");
scanf("%d",&n);
arrayin(n);
 
  } 
