//WACP to find out power.
#include<stdio.h>
#include<conio.h>
void main()
{
int index,base,i,p=1,count;
clrscr();
i=1;
printf("Enter the base and index\n");
scanf("%d%d",&base,&index);
while(i<=index)
{
 p=p*base;
 count++;
 }
 printf("power is %d",p);
 getch();
 }