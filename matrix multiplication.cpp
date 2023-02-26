#include<stdio.h>
#include<conio.h>
int main()
{
int a[2][2],b[2][2],c[2][2],p1,p2,p3,p4,p5,p6,p7,i,j,m,n;
  printf("Enter first matrix");
 for( i=0;i<2;i++)
  {
    for( j=0;j<2;j++)
      {
	  scanf("%d",&a[i][j]);
      }
  }
  printf("Enter Second Matrix");
  for( m=0;m<2;m++)
  {
     for( n=0;n<2;n++)
       {
	  scanf("%d",&b[m][n]);
       }
  }
  printf("First matrix\n");
  for( i=0;i<2;i++)
    {
	for( j=0;j<2;j++)
	 {
	  printf("%d ",a[i][j]);
	 }
	printf("\n");
    }
  printf("Second matrix\n");
  for(m=0;m<2;m++)
  {
  	for(n=0;n<2;n++)
  	{
  		printf("%d ",b[m][n]);
	  }
	  printf("\n");
  }
  
 return 0;
}
