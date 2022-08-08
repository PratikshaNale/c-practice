#include<stdio.h>
#include<conio.h>
void main()
{
int a, b,c;
clrscr();
printf("Enter the three side of triangle\n");
scanf("%d%d%d",&a,&b,&c);
if(a==b&&b==c)
{
printf("triangle is Equilatral\n");
}
else if(a==b||b==c||c==a)
{
printf("triangle is isoscalen\n");
}
else
{
printf("triangle is scalen\n");
}
getch();
}

