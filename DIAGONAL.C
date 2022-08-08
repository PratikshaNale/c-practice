#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],i,j,lsum=0,rsum=0;
clrscr();
printf("Enter the matrix\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Display the matrix\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(i==j)
{
lsum=lsum+a[i][j];
}
if(j==2-i)
{
rsum=rsum+a[i][j];
}
printf("\t%d",a[i][j]);
}
printf("\n");
}
getch();
}

