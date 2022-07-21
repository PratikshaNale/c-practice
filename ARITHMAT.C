#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,choice;
clrscr();
printf("1: Addition\n");
printf("2: Subtraction\n");
printf("3: Multiplication\n");
printf("4:Division\n");
printf("Enter your choice\n");
scanf("%d",&choice);
printf("Enter two no\n");
scanf("%d%d",&a,&b);
switch(choice)
{
case 1 :
printf("Addition is %d \n",a+b);
break;
case 2 :
printf("Subtraction is %d \n",a-b);
break;
case 3 :
printf("Multiplication is %d \n",a*b);
break;
case 4 :
printf("Division is %d \n",a/b);
break;
default :
printf("wrong choice\n");
}
getch();
}