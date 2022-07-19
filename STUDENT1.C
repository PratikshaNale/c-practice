#include<stdio.h>
#include<conio.h>
void main()
{
int s1,s2,s3,s4,s5,s6,agg,per;
clrscr();
printf("Enter the six subject marks");
scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
agg=s1+s2+s3+s4+s5+s6;
agg/6;
per<=35?printf("fail"):printf("pass");
getch();
}