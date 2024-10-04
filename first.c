#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter Frist No ");
	scanf("%d",&a);
	printf("Enter Second No");
	scanf("%d",&b);
	printf("Enter Third No");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
			printf("Greatest = %d",a);
		
		else
			printf("Greatest = %d",c);
		
	}
	else
	{
		if(b>c)
			printf("Greatest = %d",b);
		else
			printf("Greatest = %d",c);
	}
	getch();
	
}


