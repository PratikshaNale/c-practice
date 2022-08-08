#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,j,a[5];
clrscr();
printf("Enter the number in first array\n");
for(i=0;i<5;i++)
{
scanf("a[%d] %d",a[i]);
}
printf("Display the array\n");
for(i=0;i<5;i++)
{
printf("a[%d] %d",i,a[i])
}
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
if(a[i]>a[j])
{
c=a[j];
a[j]=a[i];
a[j]=c;
}
}
}
printf("Enter the after swapping\n");
for(i=0;i<5;i++)
{
printf("a[%d]",i,a[i])
}
getch();
}