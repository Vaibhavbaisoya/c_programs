#include<stdio.h>
#include<conio.h>
void main()
{
int l,r,c;
char p;
clrscr();
printf("Enter the operation(a for add, b for sub,c for multiplicaion and d for division):");
scanf("%c",&p);
if (p=='a')
{
printf("Enter the operands:");
scanf("%d%d",&r,&c);
 l=r+c;
printf("addition=%d",l);
}
else if(p=='b')
{
printf("Enter the operands:");
scanf("%d%d",&r,&c);
 l=r-c;
printf("subtraction=%d",l);
}
else if(p=='c')
{
printf("Enter the operands:");
scanf("%d%d",&r,&c);
 l=r*c;
printf("multiplication=%d",l);
}
else if(p=='d')
{
printf("Enter the operands:");
scanf("%d%d",&r,&c);
 l=r/c;
printf("division=%d",l);
}

else
{
 printf("wrong input");
}
getch();

}
