#include<stdio.h>
#include<conio.h>
void main()
{
int day;
clrscr();
printf("Enter the number\n 1 monday\n 2.tuesday\n 3.wenesday\n 4.thirsday\n 5.friday\n 6.saturday\n 7.sunday\n");
scanf("%d",&day);
switch(day)
{
case 1:
printf("monday\n");
break;
case 2:
printf("tuesday\n");
break;
case 3:
printf("wenesday\n");
break;
case 4:
printf("thirsday\n");
break;
case 5 :
printf("friday\n");
break;
case 6:
printf("saturday\n");
break;
case 7:
printf("sunday\n");
break;
default:
printf("wrong choice\n");
}
getch();
}

