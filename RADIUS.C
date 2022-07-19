#include<stdio.h>
#include<conio.h>
void main()
{
float radius,area,pi;
clrscr();
printf("\n Enter the radius of circle\n");
scanf("%f",radius);
area=radius*radius*pi;
printf("\n Area of circle is \n %f",area);
getch();
}