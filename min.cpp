#include<stdio.h>
int main()
{
	int a[]={10,20,30,40,50},n,m,max,min;
	printf("Enter the nth minimum:");
	scanf("%d",&n);
	printf("Enter the mth maximum:");
	scanf("%d",&m);
	min=a[n-m];
	max=a[n-1];	
    printf("value of minimum:%d",min);
    printf("\nvalue of maximum:%d",max);
    return 0;
}
