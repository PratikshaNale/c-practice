//WAP to input two number and swap it.

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter the two values\n");
scanf("%d%d",&a,&b);
printf("before swapping\n");
printf("\t %d \t = %d\n",a,b);
a=a*b;
b=a/b;
a=a/b;
printf("after the swapping\n");
printf("\t A=%d\t B=%d\n",a,b);
getch();
}