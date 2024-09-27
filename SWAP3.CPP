#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 printf("enter the value of and a:");
 scanf("%d",&a);
 printf("enter the value of and b:");
 scanf("%d",&b);
 printf("the entered value of a and b:",a,b);
 c=a;
 a=b;
 b=c;
 printf("\n the value of a and b after swapping=%d\n%d",a,b);
 getch();
 }




