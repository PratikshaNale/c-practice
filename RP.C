#include<stdio.h>
#include<conio.h>
void main()
{
int bs,hra,total,da;
clrscr();
printf("\nEnter the besic salary");
scanf("%d",bs);
da=bs*30/100;
hra=bs*30/100;
total=bs+da+hra;
printf("\n total is%d",total);
getch();
}