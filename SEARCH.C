#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,value;
printf("Enter the five element in array\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("display the array\n");
for(i=0;i<5;i++)
{
printf("a[%d]  %d",i,a[i]);
}
printf("\n\tEnter the value for searching\n");
scanf("%d",&value);
int flag=0;
for(i=0;i<5;i++)
{
if(Value==a[i])
{
flag=1;
break;
}
}
if(flag)
{
printf("\n\t number is found\n");
}
else
{
printf("number is not found\n");
}
getch();
}

