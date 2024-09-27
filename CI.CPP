#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float t,p,n,a;
float r,ci;
clrscr();
printf("enter the value of principal:");
scanf("%f",&p);
printf("enter the rate:");
scanf("%f",&r);
printf("enter the time period:");
scanf("%f",&t);
///printf(" tue entered are:%d\n%d",a,b);
r=r/100;
a=p*(pow((1+(r/100)),t));

ci=a-p;
printf("\n the compound interest:%.2f",ci);
getch();
}

