#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,j,c;
clrscr();
printf("Enter the values\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("before swapping\n");
for(i=0;i<5;i++)
{
printf(" a[%d]  %d\n",i,a[i]);
}
for(i=0;i<5;i++)
{
for(j=(i+1);j<5;j++)
{
if(a[i]>a[j])
{
c=a[j];
a[j]=a[i];
a[i]=c;
}
}
}
printf("after swapping %d\n");
for(i=0;i<5;i++)
{
printf("a[%d]  %d\n",i,a[i]);
}
getch();
}





