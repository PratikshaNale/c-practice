#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int no;
printf("\n Enter the three digit no");
scanf("%d",&no);
printf("before reverse it %d/n",no);
no=(no%10)*100+((no/10)%10)10*no/100);
printf("After revrse is %d/n",no);
getch();
}