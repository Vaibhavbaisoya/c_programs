#include<stdio.h>
#include<conio.h>
void main()
      {
	int temp;
       //	int p,c,m;
       //	float per;
       //	char name[50];
	clrscr();
	printf("Enter the temprature in celcius");
	scanf("%d",&temp);
       //	printf("\nEnter the marks of physics, chemistry and maths(out of 100):");
	//scanf("%d\n%d\n%d",&p,&c,&m);
	//marks=p+c+m;
	//per=(marks/3);
       //	printf("\n name=%s:",name);
	//printf("\n roll no=%d:",roll_no)	p/rintf("\n total marks=%d:",marks);


	if(temp<=0)
	 {
	 printf("\n freezing whether");
		}
	else if(temp<=10)
	  {
		printf("\n very cold whether");
		}
	 else if(temp<=20)
	  {
		printf("\n cold whether");
	   }
	 else if(temp<=30)
	  {
		printf("\n normal whether");
		}
	 else if(temp<=40)
	  {
		printf("\n hot whether");
		}

	  else
	    {
		printf("\n very hot whether");
		}
	getch();
      }