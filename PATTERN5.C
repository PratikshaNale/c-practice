//2
//23
//234
//2345

#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();
for(i=2;i<=5;i++)
 {
  for(j=2;j<=5;j++)
  {
  if(i<=j)
  {
  printf("%d",i);
  }
  }
  printf("/n");
  }
  getch();
  }