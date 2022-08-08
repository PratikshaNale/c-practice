//WAP to input selling price and cost price of product and check seller made
//profit or loss and display the profit gain by shopkeeper loss and profit shopkeeper.

#include<stdio.h>
#include<conio.h>
void main()
{
int sp,cp;
clrscr();
printf("Enter the selling price and cost price is \n");
scanf("%d%d",&cp,&sp);
sp>cp?printf("proit is %d\n",sp-cp):printf("loss is %d\n", sp-cp );
getch();
}





