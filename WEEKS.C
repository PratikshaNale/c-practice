//WACP to print all days of week using switch statement (consider case1:monday
//case 2:tuesday.......case 7 :sunday)
#include<stdio.h>
#include<conio.h>
void main()
{
int day;
clrscr();
printf("Enter the day\n");
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
case 5:
printf("friday\n");
break;
case 6:
printf("saturday\n");
break;
case 7:
printf("sunday\n");
break;
default :
printf("wrong choice\n");
}
getch();
}



