#include<stdio.h>
#include<conio.h>
void main()
      {
	char name[50];
	int cust_id,unit;
       //	float per;
       //	char name[50];
	clrscr();
	printf("Enter your name:");
	scanf("%s",&name);
	printf("Enter the customer_id and unit consumed:");
	scanf("%d%d",&cust_id,&unit);
	printf("name:%s",name);
	printf("\ncustomer id:%d",cust_id);
	printf("\nunit consumed:%d",unit);


       //	printf("\nEnter the marks of physics, chemistry and maths(out of 100):");
	//scanf("%d\n%d\n%d",&p,&c,&m);
	//marks=p+c+m;
	//per=(marks/3);
       //	printf("\n name=%s:",name);
	//printf("\n roll no=%d:",roll_no)	p/rintf("\n total marks=%d:",marks);


	if(unit<=100)
	 {
	 printf("\n charges per unit:1.2");
	printf("\ntotal charge:%f",unit*1.2);

		}
	else if(unit<=400)
	  {
	 printf("\n charges per unit:1.5");
	printf("\ntotal charge:%f",unit*1.5);


		}
	 else if(unit<=600)
	  {
	    printf("\n charges per unit:1.8");
	printf("\ntotal charge:%f",unit*1.8);

	   }
	else if(unit>600)
	  {
	   printf("\n charges per unit:2.0");
	printf("\ntotal charge:%f",unit*2.0);

		}
       //	 else if(temp<=40)
	 // {
	   //	printf("\n hot whether");


	  else
	    {
		printf("\n wrong input ");
		}
	getch();
      }