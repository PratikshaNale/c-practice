#include<stdio.h>
#include<conio.h>
void main()
{
int no;
clrscr();
printf("Enter the no");
scanf("%d",&no);
switch(no<0)
{
case 0 :
printf("given no is positive");
break;
case 1 :
printf("given no is negative");
break;
}
getch();
}