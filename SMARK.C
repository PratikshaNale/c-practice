#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e,f,per,agg;
clrscr();
printf("Enter the six subject marks\n");
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
if(a>100||b>100||c>100||d>100||e>100||f>100)
{
printf("Invalid marks\n");
}
agg=a+b+c+d+e+f;
per=agg/6;
printf("aggrigate is %d\n",agg);
printf("percentage is %d\n",per);
if(per>=80&&per<100)
{
printf("distingsion\n");
}
else
{
if(per>=60&&per<80)
{
printf("first division\n");
}
else if(per>=50&&per<60)
{
printf("second division\n");
}
else if (per>=40&&per<30)
{
printf("third division\n");
}
else
{
printf("fail\n");
}
getch();
}
}

