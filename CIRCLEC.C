#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter the two number\n");
scanf("%d%d",&a,&b);
printf("Before swapping\n");
printf("\t%d \t%d",a,b);
a=a*b;
b=a/b;
a=a/b;
printf("\n after swapping%d\t %d\n",a,b);
getch();
}