#include<stdio.h>
#include<conio.h>
void main()
{
int no,i,j,p;
clrscr();
printf("Enter the number\n");
scanf("%d",&no);
printf("All prime factors of%d are: ",no);
for(i=2;i<=no;i++)
 {
  if(no/i==0)
   {
    p=1;
    for(j=2;j<=i;j++)
     {
      if(i%j==0)
      {
      p=0;
     break;
      }
     }
     }
      if(p==1)
      {
      printf("%d\t",i);
      }
      }
      getch();
      }









