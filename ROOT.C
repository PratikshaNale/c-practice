//WAP to groups of quadratic eqution find its root.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float a=8,b=-4,c=-2,d,r1,r2;
clrscr();
printf("\n value of a is %f",a);
printf("\n value of b is %f",b);
printf("\n value of c is %f",c);
d=(b*b)-(4*a*c);
if(d>0)
{
r1 = (-b*sqrt(d))/(2*a);
r2 = (-b*sqrt(d))/(2*a);
printf("the real roots are %f%f\n",r1,r2);
}
else if(d==0)
{
r1=-b/(2*a);
r2=-b/(2*a);
printf("the real roots are %f%f",r1,r2);
}
else
{
printf("\n roots are imaginary");
}
getch();
}

