#include<stdio.h>
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("%d %d",a,b);
}
int main()
{
	int array[5],c,n,d;
	for (c=0;c<5-1;c++)
    {
        for (d=0;d<5-c-1;d++)
        {
            if (array[d]>array[d+1])
            {
                swap(array[d],array[d+1]);
            }
        }
    }
    printf("Sorted list in ascending order:\n");
    for (c=0;c<n;c++)
    {
        printf("%d\n",array[c]);
    }
    return 0;
}

