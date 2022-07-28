//WACP to find sum of first and last digit of a number.
#include<stdio.h>
#include<conio.h>
void main()
{
long int no,mod,temp, sum=0;
clrscr();
printf("Enter the digit number is\n");
scanf("%ld",&no);
if(no>=-9 && no<10);
{
printf("sum of the digit number is%ld\n ",no);
}
temp=no%10;
while(no!=0)
{
mod=no%10;
no=no/10;
}
sum=temp+mod;
{
printf("sum of given digit number is\t%ld\n",sum);
}
getch();
}




