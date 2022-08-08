#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i;
clrscr();
printf("Enter the element in array\n");
for(i=1;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("Display the array\n");
for(i=1;i<5;i++)
{
printf("a[%d]  %d",i,a[i]");
}
getch();
}

