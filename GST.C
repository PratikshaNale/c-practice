#include<stdio.h>
#include<conio.h>
void main()
{
int rate,total,qty,intgst,bwg,gst;
clrscr();
printf("Enter the quantity and rate");
scanf("%d%d",&rate,&qty);
total=qty*rate;
if(total>=1000)
{
int gstamount=(total*18)/1000;
int billwithgst=total+gstamount;
printf("bill with 18 gst %d \n",billwithgst);
}
if(total<1000)
{
intgst=(total*20)/100;
 bwg =total+gst;
printf("bill with 20% gst %d\n",bwg);
}
getch();
}


