#include<stdio.h>
#include<conio.h>
void main()
{
int count=0,no;
clrscr();
printf("Enter the number\n");
scanf("%d",&no);
while(no!=0)
{
++count;
no=no/10;
}
printf("count of digit is %d",count);
getch();
}
