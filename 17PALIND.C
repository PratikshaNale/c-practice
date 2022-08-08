#include<stdio.h>
#include<conio.h>
void main()
{
int no,temp,rem=0,rev=0;
clrscr();
printf("Enter the number\n");
scanf("%d",&no);
temp=no;
while(no!=0)
{
rem=no%10;
no=no/10;
rev=rev*10+rem;
}
if(temp=rev)
{
printf("number is palindrom\n");
}
else
{
printf("number is not palindrome\n");
}
getch();
}

