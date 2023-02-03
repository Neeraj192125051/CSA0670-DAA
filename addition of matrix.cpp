
#include<stdio.h>
int main()
{
	int a,b,i,j,first[10][10],second[10][10],sum[10][10];
	printf("enter the number of row");
	scanf("%d",&a);
	printf("enter the number of columns");
	scanf("%d",&b);
	printf("enter elements of first matrix :");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",first[10][10]);
		}
	}
	printf("enter elements of second matrix :");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",second[10][10]);
		}
	}
	printf("sum of matrice:");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			sum[i][j]=first[i][j]+second[i][j];
			printf("%d",sum[i][j]);
		}
	}
}

