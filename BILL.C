//write a program input the rate and quantity from keyboard and calculate bill using a following terms
// casse 1  bill without gst
// case 2   bill with gst of 18 %

#include<stdio.h>
#include<conio.h>
void main()
{
int qty,rate,gst,total,choice;
clrscr();
printf("Enter the rate and quantity \n");
scanf("%d%d",&rate,&qty);
printf("Enter your choice \n");
scanf("%d",&choice);
switch(choice)
{
case 1 :
printf("Bill without gst %d \n",gst*rate);
break;
case 2 :
 gst = (qty*rate)*18/100;
 total =(qty*rate)+gst;
printf("bill with gst %d \n",total);
break;
default :
printf("wrong choice");
}
getch();
}