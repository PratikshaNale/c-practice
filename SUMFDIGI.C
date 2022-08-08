 //WAP to input the four digit number and calculate the sum ofall digit.

#include<stdio.h>
#include<conio.h>
void main()
{
int no,sum=0,rem;
clrscr();
printf("Enter the four digit number\n");
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
printf("sum of all digit is%d",sum);
getch();
}
