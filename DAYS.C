//WAP to converted days into year month and weak.

#include<stdio.h>
#include<conio.h>
void main()
{
int d,m,y,w;
clrscr();
printf("Enter the day\n");
scanf("%d",&d);
w=d/7;
m=d/30;
y=d/365;
printf("days is converted into weak month and year %d\n %d\n %d\n ",w,m,y);
getch();
}