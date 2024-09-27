#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter the value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);
printf(" the value entered are:%d\n%d",a,b);
b=a+b;
a=b-a;
b=b-a;
printf("\n the values after swappping:%d\n%d",a,b);
getch();
}

