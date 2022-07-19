#include<stdio.h>
#include<conio.h>
void main()
{
int no,rev;
clrscr();
printf("Enter the three digit no");
scanf("%d",&no);
rev=(no%10)*100+((no/10)%10)*10+no/100;
no==rev?printf("palimdrome"):printf("not palimdrome");
getch();
}