#include<stdio.h>
#include<conio.h>
void main()
{
int no,rem,sum=0;
clrscr();
printf("Enter the number\n");
scanf("%d",&no);
while(no>0)
{
rem=no%10;
no=no/10;
sum=sum+rem;
}
printf("sum is %d\n",sum);
getch();
}





