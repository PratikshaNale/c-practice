//WACP to input 10 element array and print occaraence of every element.
#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],count=0,i,svalue,index;
clrscr();
printf("Enter the element in array\n");
for(i=0;i<=9;i++)
{
scanf("%d",a[i]);
}
printf("Enter a search value \n");
scanf("%d",&svalue);
for(i=0;i<=9;i++)
{
if(a[i]==svalue)
{
count++;
index=i;
}
}
printf("Element %d found %d\n",a[index],count);
getch();
}