#include<stdio.h>
#include<conio.h>
void main()
      {
	char temp;
       //	int p,c,m;
       //	float per;
       //	char name[50];
	clrscr();
	printf("Enter the char value:");
	scanf("%c",&temp);
       //	printf("\nEnter the marks of physics, chemistry and maths(out of 100):");
	//scanf("%d\n%d\n%d",&p,&c,&m);
	//marks=p+c+m;
	//per=(marks/3);
       //	printf("\n name=%s:",name);
	//printf("\n roll no=%d:",roll_no)	p/rintf("\n total marks=%d:",marks);


	if(temp>='a'&&temp<='z'||temp>='A'&&temp<='Z')
	 {
	 printf("\n it is character:%c",temp);
		}
	else if(temp>='0'&&temp<='9')
	  {
		printf("\n it is digit:%c",temp);
		}
	// else if(temp<=20)
	  //{
	    //	printf("\n cold whether");
	  // }
	// else if(temp<=30)
	  //{
	    //	printf("\n normal whether");
	      //	}
       //	 else if(temp<=40)
	 // {
	   //	printf("\n hot whether");


	  else
	    {
		printf("\n special character");
		}
	getch();
      }