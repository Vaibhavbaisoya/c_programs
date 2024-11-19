#include<stdio.h>
int main()
{
	int i,j,arr[10][10];
	int sum=0;
	printf("enter the element:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
	        sum=sum+arr[i][j];
		}
	}
	printf("%d",sum);
	return 0;
}
	
