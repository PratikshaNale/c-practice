#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int rem,sum=0,no;
printf("Enter the four digit number is\n");
scanf("%d",&no);
rem=no%10;
rem=no/10;
sum=sum+rem;
//rem=no%10;
//rem=no/10;
//sum=sum+rem;
//rem=no%10;
//rem=no/10;
//sum=sum+rem;
printf("sum of four digit number is%d\n",sum);
getch();
}
