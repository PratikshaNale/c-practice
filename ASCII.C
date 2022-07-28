//WACP to print all ascii character with there symbol.

#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
printf("print the Alphabate with ASCII value\n");
for(i=65;i<=255;i++)
{
printf("\t%d= %c",i,i);
}
getch();
}
