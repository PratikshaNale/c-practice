#include<stdio.h>
#include<conio.h>
void main()
{
int no,i ;
clrscr();
printf("Enter the number\n");
scanf("%d",&no);
i=2;
while(i<no)
{
if(no%i==0)
{
printf("%d\n",i);
no=no/i;
}
i++;
}
getch();
}





