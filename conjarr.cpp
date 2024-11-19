#include<stdio.h>
void main()
{
	int i,j,arr[10][10],arr3[10][10];
	printf("enter the element for first array:");
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
			arr3[j][i]=arr[i][j];
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
	        printf("%d",arr3[i][j]);
		}
	}
	
}
