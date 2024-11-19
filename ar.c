#include<stdio.h>
void main()
{
	int i,j,arr[10][10];
	printf("enter the element:");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
	        printf("%d",arr[i][j]);
		}
	}
	
}
