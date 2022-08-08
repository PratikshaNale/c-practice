#include<stdio.h>
#include<conio.h>
void main()
{
int no,sum=0;
clrscr();
no=1;
while(no<=100)
{
if(no%2==1)
{
printf("%d\t",no);
sum=sum+no;
}
no++;
}
getch();
}
