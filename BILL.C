//WAP input the quantity and rate of product and calculate its total bill and if bill amount is
//greter than 1000 rs.then apply gst per on bill and if bill amount is less
//than 1000 then apply gst 20% on bill.

#include<stdio.h>
#include<conio.h>
void main()
{
int qty,rate,total;
clrscr();
printf("Enter the quantity and rate\n");
scanf("%d%d",&qty,&rate);
total=qty*rate;
if(total>=1000)
{
int gstamount = (total*18)/1000;
int billwithgst =total+gstamount;
printf("bill with 18 %gst %d\n",billwithgst);
}
else if(total<1000)
{
int gst =(total*20)/100;
int bwg = total+gst;
printf("Bill with 20 % gst %d\n",bwg);
}
}



