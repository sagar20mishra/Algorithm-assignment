#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp;
	char[50] c;
//	printf("Enter data into file");
//	fp=fopen("D://camera/sagar.txt","a");
//	while((c=getchar())!='\n')
//	{
//	fputc(c,fp);
   // }
//	fclose(fp);
	printf("\n Data in file\n");
	fp=fopen("D://camera/sagar.txt","r");
//	while((c=getc(fp))!=EOF)
//	{
		fprintf(fp,"%s",c);
//	}
	fclose(fp);
	
	return 0;	
}