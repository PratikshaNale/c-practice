#include<stdio.h>
#include<conio.h>
void main()
{
int tab ,i,no;
clrscr();
printf("Enter the number\n");
scanf("%d",&no);
i=1;
while(i<=10)
{
tab = no*i;
printf("\t%d\n",tab);
i++;
}
getch();
}

