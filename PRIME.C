#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,no,flag;
printf("Enter the number\n");
scanf("%d",&no);
i=2,flag=1;
while(i<no)
{
if(no%i==0)
{
flag=1;
break;
}
i++;
}
if(flag==0)
printf("Given no is prime\n");
else
{
printf("Given no is not prime no\n");
}
getch();
}


