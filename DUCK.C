//WAP to input the no and cheack number is duck or not.

#include<stdio.h>
#include<conio.h>
void main()
{
int no,rem,flag=0;
clrscr();
printf("Enter the number is\n");
scanf("%d",&no);
while(no!=0)
{
rem=no%10;
no=no/10;
if(rem==0)
{
flag=1;
break;
}
}
if(flag)
{
printf("number is duck\n");
}
else
{
printf("number is not duck\n");
}
getch();
}

