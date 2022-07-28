#include<stdio.h>
#include<conio.h>
void main()
{
int f=1,no;
clrscr();
printf("Enter the number\n");
scanf("%d",&no);
while(no>0)
{
f=f*no;
no--;
printf("factorial is %d\n",f);
}
getch();
}