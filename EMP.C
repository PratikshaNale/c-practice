#include<stdio.h>
#include<conio.h>
void main()
{
int sal,id;
clrscr();
printf("Enter the employee id\n");
scanf("%d",&id);
if(id>=1&&id<=10)
{
printf("Enter the salary\n");
scanf("%d",sal);
if(sal>10000)
{
printf("candidate is permenent employee");
}
else
{
printf("candidate is temporary employee");
}
}
else
{
printf("not employee");
}
getch();
}