 //WACP to print a fibonacci serise upto five itretion.
#include<stdio.h>
#include<conio.h>
void main()
{
int i, f1,f2,fib;
clrscr();
f1=0;
f2=1;
printf("febbonacii serise is: \n%d\n%d\n",f1,f2);
for(i=1;i<=5;i++)
{
fib=f1+f2;
f1=f2;
f2=fib;
printf("%d\n",fib);
}
getch();
}
