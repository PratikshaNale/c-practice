#include<stdio.h>
#include<conio.h>
void main()
{
int y;
clrscr();
printf("Enter the year\n");
scanf(" %d",&y);
if(y%4==0)
{
printf("leap year\n");
}
else
{
printf("not leap year\n");
}
getch();
}
