#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,choice;
clrscr();
printf("1.addition\n");
printf("2.subtraction\n");
printf("3.multiplication\n");
printf("Enter your choice\n");
scanf("%d",&choice);
printf("Enter the two value\n");
scanf("%d%d",&a,&b);
switch(choice)
{
case 1:
printf("addition is %d\n",a+b);
break;
case 2:
printf("subtraction is%d\n",a-b);
break;
case 3:
printf("multiplication is %d\n",a*b);
break;
default:
printf("wrong choice\n");
}

getch();
}


