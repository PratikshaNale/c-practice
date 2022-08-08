#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the three angle of triangle\n");
scanf("%d%d%d",&a,&b,&c);
if(a+b+c==180)
{
printf("triangle is valid\n");
}
else
{
printf("triangle is not valide\n");
}
getch();
}
