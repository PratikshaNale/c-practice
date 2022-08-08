//WACP to input the rate and quantity from keyboard and calculate bill
//using a following terms.
//case 1:bill with gst
//case 2:bill with gst of 18%
#include<stdio.h>
#include<conio.h>
void main()
{
int choice,qty,rate,gst,total;
clrscr();
printf("Enter the rate and quantity\n");
scanf("%d%d",&qty,&rate);
printf("Enter your choice\n");
scanf("%d",choice);
switch(choice)
{
case 1 :
printf("bill without gst %d \n",qty*rate);
break;
case 2 :
gst=(qty*rate) *18/100;
total=(qty*rate)+gst;
printf("bill with gst %d\n",total);
break;
default :
printf("wrong choice\n");
}
getch();
}