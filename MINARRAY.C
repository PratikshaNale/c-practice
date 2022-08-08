#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,min;
clrscr();
printf("Enter the five element in array\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("Disply the array\n");
min=a[0];
for(i=0;i<5;i++)
{
if(a[i]<max)
{
min=a[i];
}
}
printf("a[%d] %d",i,a[i]);
printf("minimum value is %d\n",min);
getch();
}


