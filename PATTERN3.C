#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j;
for(i=65;i<=68;i++)
{
 for(j=65;j<=68;j++)
 {
 if(i>=j)
 {
 printf("%c",j);
 }
 }
 printf("\n");
 }
 getch();
}


