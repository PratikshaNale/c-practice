#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
   float a=5,b=-6,c=5,d,r1,r2;
clrscr();
  printf("\nvalue of a is %f",a);
  printf("\nvalue of b is %f",b);
  printf("\nvaliue of c is %f",c);
  d=(b*b)-(4*a*c);
if(d>0)
{
   r1=(-b+sqrt(d))/(2*a);
   r2=(-b-sqrt(d))/(2*a);
printf("the real roots are %f%f",r1,r2);
}
else if(d==0)
{
r1=-b/(2*a);
r2=-b/(2*a);
printf("the real roots are %f%f",r1,r2);
}
else
{
printf("\n the roots are imaginary");
}
getch();
}

