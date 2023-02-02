#include<stdio.h>
int main()
{
	int values[5],num,i,j,pass=0;
	printf("Enter the integers in the array: ");
	for(i=0;i<5;++i)
	{
		scanf("%d",&values[i]);
	}
	printf("Enter the number to be search:");
	scanf("%d",&num);
	for(j=0;j<5;++j)
	{
		if (num==values[j])
		{
			pass=1;
			break; 
		}
    }
    if (pass==1)
    {
    	printf("%d is Found in the array.",num);
	}
	else
	{
		printf("%d is Not Found in the array.",num);
	}
	return 0;
}
