#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("Enter the character\n");
scanf("%c",&ch);
if(ch>='A'&&ch<='Z')
{
ch=ch+32;
}
switch(ch)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
printf("character is ovels \n");
break;
default :
printf("consonent\n");
}
getch();
}

