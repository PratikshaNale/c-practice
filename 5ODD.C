#include<stdio.h>
#include<conio.h>
void main()
{
int no;
clrscr();
printf("print 1 to 100 odd number\n");
no=1;
while(1<=no)
{
if(no%2==1)
{
printf("%d\t",no);
}
no++;
}
getch();
}
