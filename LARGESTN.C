// write a program to find largest number among three number

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter three no \n");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&b>c)
{
printf("A is greter no \n");
}
else if(b>a&&b>c)
{
printf("B is greter no\n");
}
else
{
printf("c is greter no \n");
}
getch();
}
