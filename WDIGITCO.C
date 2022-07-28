#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int no;
printf("Enter the digit no\n");
scanf("%d",&no);
while(no<0)
{
rem=no%10;
no=no/10;
sum=sum+rem;