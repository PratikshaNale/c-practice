//WAP to input the besic salary of employee and calculate its total salary using a term.

#include<stdio.h>
#include<conio.h>
void main()
{
int hra,total,bs,da;
clrscr();
printf("Enter the besic salary of employee\n");
scanf("%d",&bs);
da=bs*30/100;
hra=bs*30/100;
total=da+hra;
printf("salary is %d",total);
getch();
}