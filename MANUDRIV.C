

#include<stdio.h>
#include<conio.h>
void main()
{
int choice,circle,square,triangle,radius,no,base,height,pi=3.14,sq;
clrscr();
printf("1:area of circle\n");
printf("2:area of square\n");
printf("3:Area of triangle\n");
printf("Enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1 :
printf("Enter the radius is\n");
scanf("%d",&radius);
printf("Area of circle is %d\n",radius*radius*pi);
break;
case 2 :
printf("Enter the no is\n");
scanf("%d",&no);
printf("area of square is %d\n",sq=no*no);
break;
case 3 :
printf("Enter the base and heigt\n");
scanf("%d%d",&base,&height);
printf("Area of triangle is %d\n",0.5*base*height);
break;
}
getch();
}


