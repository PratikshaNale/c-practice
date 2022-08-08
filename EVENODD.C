#include<stdio.h>
#include<conio.h>
void main()
{
int no;
clrscr();
printf("Enter the number\n");
scanf("%d",&no);
if(no%2==0)
{
printf("number is even\n");
}
else
{
printf("number is odd\n");
}
getch();
}