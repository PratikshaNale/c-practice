#include<stdio.h>
#include<conio.h>
void main()
{
int length,width,area;
clrscr();
printf("\n Enter width and length in rectangle \n");
scanf("%d%d",&length,&width);
area=length*width;
printf("\n Area is %d \n", area);
getch();
}
