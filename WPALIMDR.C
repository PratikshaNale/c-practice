//WACP to findout given no is palimdrome or not.
#include<stdio.h>
#include<conio.h>
void main()
{
int no,rev=0,rem,temp;
clrscr();
printf("Enter the digit number\n");
scanf("%d",no);
temp=no;
while(temp>0)
{
rem = temp%10;
rev = rev*10+rem;
temp= temp/10;
}
printf("reversed number is= %d\n",rev);
if(no==rev)
{
printf("\n%d is a palimdrome no\n",no);
}
else
{
printf("%d is not a palimdrome\n",no);
}
getch();
}