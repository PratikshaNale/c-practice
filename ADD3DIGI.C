#include<stdio.h>
#include<conio.h>
void main()
{
int no,sum=0,rem=0;
clrscr();
printf("Enter the three digit number\n");
scanf("%d",&no);
rem=no%10;
no=no/10;
sum=sum+rem;
rem=no%10;
no=no/10;
sum=sum+rem;
rem=no%10;
no=no/10;
sum=sum+rem;
printf("addition of three digit number%d",sum);
getch();
}