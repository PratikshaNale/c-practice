//WAP to enter the temprature and convert the celcius.

#include<stdio.h>
#include<conio.h>
void main()
{
float c,f;
clrscr();
printf("Enter the temprature is celcius\n");
scanf("%f",&c);
f=(c*(9/5)+32);
printf("converted is celcius%f\n",f);
getch();
}
