#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],count=0,i,svalue,index;
clrscr();
printf("Enter the value in array\n");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the search value\n");
scanf("%d",&svalue);
for(i=0;i<10;i++)
{
if(a[i]==svalue)
{
count++;
index=i;
}
}
printf("element %d found %d times",a[index],count);
getch();
}