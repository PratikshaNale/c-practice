#include<stdio.h>
#include<conio.h>
void main()
{
int rem, no,i,sum=0;
clrscr();
printf("Enter the number\n");
scanf("%d",&no);
i=1;
while(i<no)
{
rem=no%i;
if(rem==0)
{
sum=sum+i;
}
i++;
}
if(sum==no)
{
printf("number is perfect\n");
}
else
{
printf("number is not perfect\n");
}
getch();
}
