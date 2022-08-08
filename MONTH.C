#include<stdio.h>
#include<conio.h>
void main()
{
int ch;
clrscr();
printf("Enter the choice of momth\n");
scanf("%d",&ch);
switch(ch)
{
case 1 :
printf("month is january and day 31\n");
break;
case 2:
printf("month is february and 29 \n");
break;
case 3:
printf("month is march and day 30\n");
break;
case 4:
printf("month is april and days 31\n");
break;
case 5:
printf("month is may and day 30\n");
break;
case 6:
printf("month is june and day 31\n");
break;
case 7:
printf("month is july and day 30\n");
break;
case 8:
printf("month is augst and day 31\n");
break;
case 9:
printf("month is september and day 30\n");
break;
case 10:
printf("month is octomber and day 31\n");
break;
case 11:
printf("month is november and day 30\n");
break;
case 12:
printf("month is december and day 31\n");
break;
default :
printf("wrong choice\n");
}
getch();
}

