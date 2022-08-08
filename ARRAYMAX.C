#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],max,i;
clrscr();
printf("Enter the five element in array\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("display the array\n");
max = a[0];
for(i=0;i<5;i++)
{
if(a[i]>max)
{
max=a[i];
}
printf("a[%d] %d\n",i,a[i]);
}
printf("search the maximum element%d\n",max);
getch();
}





