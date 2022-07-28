#include<stdio.h>
#include<conio.h>
void main()
{
int i,no,choice;
clrscr();
printf("1 : Given number is prime or not\n");
printf("2 : reverse given \n");
printf("3:number is even or odd\n");
printf("number is armstrong or not \n");
printf("Enter your choice \n");
scanf("%d",choice);
printf("Enter a no \n");
scanf("%d", no);
switch(choice)
{
case 1:
printf("Given no is prime or not \n");
break;
case 2 :
printf("revrse given \n");
break;
case 3 :
if(no%2)
printf("number is even or odd \n");
break;
case 4 :
printf("number is armstrong or not\n");
break;
default :
printf("invalid number \n");
}
getch();
}