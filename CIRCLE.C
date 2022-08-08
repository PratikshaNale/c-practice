#include<stdio.h>
#include<conio.h>
void main()
{
float p=3.14,r,area,c;
clrscr();
printf("Enter the radius of circle\n");
scanf("%f",&r);
area=r*r*p;
c=2*p*r;
printf("area of circle is %f\n",area);
printf("circumfarance is %f\n",c);
getch();
}
