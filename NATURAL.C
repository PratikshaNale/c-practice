
#include<stdio.h>
#include<conio.h>
void main()
{
int i,no,sum=0;
clrscr();
printf("Enter the number\n");
scanf("%d",&no);
i=1;
while(i<=10)
{
sum=sum+i;
printf("sum of natural number is %d\n",sum);
}
i++;
getch();
}
