#include<stdio.h>
#include<conio.h>
void main()
{
int year;
clrscr();
printf("Enter the year\n");
scanf("%d",year);
year%4==0?printf("leap year\n"):printf("not leap year\n");
getch();
}