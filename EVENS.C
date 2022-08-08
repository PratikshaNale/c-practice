//WAP to check whether number is even or odd using switch statement.
#include<stdio.h>
#include<conio.h>
void main()
{
int no,ch;
clrscr();
printf("Enter the number\n");
scanf("%d",&no);
switch(no%2)
{
case 0:
printf("number is even\n");
break;
case 1:
printf("number is odd\n");
break;
}
getch();
}



