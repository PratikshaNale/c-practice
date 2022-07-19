#include<stdio.h>
#include<conio.h>
void main()
{
long int nmunit,puniter,total,dis;
clrscr();
printf("%d",nmunit);
scanf("%d",puniter);
total=nmunit*puniter;
dis=total*20/100;
total>2000?printf("bill with discount %d \n",total-dis):printf("bill with discount %d\n",total);
getch();
}