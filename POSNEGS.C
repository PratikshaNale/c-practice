 //WAP to given number check the positive or neagative.
#include<stdio.h>
#include<conio.h>
void main()
{
int no;
clrscr();
printf("Enter the number \n");
scanf("%d",&no);
switch(0<no)
{
case 1:
printf("Number is positive\n");
break;
case 2:
printf("Number is neagative\n");
break;
}
getch();
}


