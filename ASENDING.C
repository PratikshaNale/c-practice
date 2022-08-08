//WACP to enter the five element in acending order and store in array and find out missing element.

#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],j,i,c,sum=0,n,start,end;
clrscr();
printf("Enter the five element in array\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("before asending order\n");
for(i=0;i<5;i++)
{
printf("\n\t a[%d]  %d\n",i,a[i]);
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
printf("\n after acending order\n");
for(i=0;i<5;i++)
{
printf("a[%d]=%d\n",i,a[i]);
sum=sum+a[i];
}
printf("\n find out missing element\n");
for(i=0;i<5;i++)
{
end=a[i+1];
for(start=a[i];start<end;start++)
{
if(a[i]!=start)
{
printf("%d\t",start);
}
}
getch();
}
}