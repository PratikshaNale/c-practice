//WAP to Enter marks of five subject ad calculate total avarge and percentage.
#include<stdio.h>
#include<conio.h>
void main()
{
float s1,s2,s3,s4,s5,avg,per,total;
clrscr();
printf("Enter the five subject marks\n");
scanf("%f%f%f%f%f",s1,s2,s3,s4,s5);
total=s1+s2+s3+s4+s5;
avg=total/5;
per=(total/500)*100;
printf("total is %f\n",total);
printf("avarage is%f\n",avg);
printf("percentage is %f\n",per);
getch();
}