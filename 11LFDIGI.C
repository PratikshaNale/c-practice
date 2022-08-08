#include<stdio.h>
#include<conio.h>
void main()
{
int no,ld,fd, rem;
clrscr();
printf("Enter the number\n");
scanf("%d",&no);
if(no>0)
{
rem=no%10;
no=no/10;
ld=rem;
}
no=no/10;
if(no>0)
{
no=no/10;
rem=no%10;
no=no%10;
fd=rem;
}
printf("last digit is %d\n",ld);
printf("first digit is %d\n",fd);
getch();
}

