//WACP to print all odd numbers between 1 to 100.
#include<stdio.h>
#include<conio.h>
void main()
{
int no;
clrscr();
printf("print odd no is 1 to 100 are\n");
no=1;
while(no<100)
{
if(no%2!=0)
printf("%d\n",no);
no++;
}
getch();
}
