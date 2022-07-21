#include<stdio.h>
#include<conio.h>
void main()
{
int no;
clrscr();
printf("Enter the no");
scanf("%d",&no);
switch(no%2)
{
case 0 :
printf("number is even");
break;
case 1 :
printf("number is odd");
break;
}
getch();
}

