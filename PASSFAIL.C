//WAP to input the six subjet marks of student and calculate its percentage and
//if percentage is gretter yhan 35 then student is pass otherwise student is fail.

#include<stdio.h>
#include<conio.h>
void main()
{
float s1,s2,s3,s4,s5,s6,total,avg,per;
clrscr();
printf("Enter the six subject marks\n");
scanf("%f%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5,&s6);
total=s1+s2+s3+s4+s5+s6;
avg=total/6;
per<35?printf("pass\n"):printf("fail\n");
getch();
}
