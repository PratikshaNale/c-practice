

#include<stdio.h>
#include<conio.h>
void main()
{
int i,no;
clrscr();
printf("Enter the number\n");
scanf("%d", &no);
i=1;
while(i<=no)
{
if(no%i==0)
printf("factor is %d\n",i);
i++;
}
getch();
}
