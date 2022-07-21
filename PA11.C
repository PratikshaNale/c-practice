#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the two side of triangle");
scanf("%d%d",&a,&b);
if(a==b&&b==c)
c=180-(a+b);
if(a<180||b<180)
{
printf("Invalid trainagle");
}
printf("Third side of triangle%d",c);
getch();
}

