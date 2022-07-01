#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char A,B,C,D;
int s,b,h,w;
float r;
float areaofcircle;
int areaoftriangle;
int areaofrectangle,areaofsquare;
float pi;
char d;
pi=3.14;
printf("\t\tENTER A TO FIND AREA OF CIRLCE \n\t\tENTER B TO FIND AREA OF TRIANGLE \n\t\tENTER C TO FIND ARE OF SQUARE \n\t\tENTER D TO FIND AREA OF RECATANGLE.\n");
scanf("\n%c",&d);

switch(d)
{
case 'A': printf("\nenter radius of circle:");
	scanf("%f",&r);
	areaofcircle = 3.14*r*r;
	printf("\narea of circle : %f", 3.14*r*r);
	break;
case 'B': printf("\nenter base mesurement of triangle:");
	scanf("%d",&b);
	printf("\nenter height mesurment of triangle:");
	scanf("%d",&h);
	areaoftriangle = b*h*1/2;
	printf("\narea of triangle : %d", areaoftriangle);
	break;
case 'C': printf("\nenter length of one side of square:");
	scanf("%d",&s);
	areaofsquare = s*s;
	printf("\narea of square : %d", s*s);
	break;
case 'D': printf("\nenter width of rectangle:");
	scanf("%d",&w);
	printf("\nenter height of rectangle:");
	scanf("%d",&h);
	areaofrectangle = w*h;
	printf("\narea of rectangle : %d", w*h);
	break;
default: printf("\ninvalid");

}
getch();
}