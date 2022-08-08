//WACP input the character from keyboard and cheack character
// is a alphabate,digit or special symbol.

#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("Enter the character\n");
scanf("%c",&ch);
if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
{
printf("character is alphabate");
}
else if(ch>='0'&&ch<='9')
{
printf("character is digit");
}
else
{
printf("character is special symbol");
}
getch();
}




