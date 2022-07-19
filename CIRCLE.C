#include<stdio.h>
#include<conio.h>
void main()
{
float radius,area,pi;
clrscr();
printf("\nEnter the radius of circle");
scanf("%f",radius);
area=radius*radius*pi;
printf("\nArea of circle is",area);
getch();
}