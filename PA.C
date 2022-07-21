#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the three side of tringle");
scanf("%d%d%d",&a,&b,&c);
if(a==b&&b==c)
{
printf("tringle is the equilateral");
}
else if(a==b||b==c||c==a)
{
printf("Traiangle is isoscale");
}
else
{
printf("tringle is scalene");
}
getch();
}
