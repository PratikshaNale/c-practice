//WAP to input the number and cheack number is positive or neagative.

#include<stdio.h>
#include<conio.h>
void main()
{
int no;
clrscr();
printf("Enter the number\n");
scanf("%d",&no);
if(no>0)
{
printf("number is positive%d\n",no);
}
else
{
printf("number is negative%d",no);
}
getch();
}
