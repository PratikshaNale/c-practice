#include<stdio.h>
#include<conio.h>
void main()
{
int si,t,r,p;
clrscr();
printf("Enter the principle amount time and rate\n");
scanf("%d%d%d",&p,&t,&r);
si=(p*t*r)/100;
printf(" the simple interest %d\n",si);
getch();
}