#include<stdio.h>
#include<conio.h>
void main()
{
long int start,end,count,rem,sum,original,temp,p,i,ctv,index,power,j;
printf("please enter the range\n");
scanf("%ld%ld",&start,&end);
printf("Armstrong number between%ld%ld",start,end);
for(i=start;i<=end;i++)
 {
  if(i>=0&&i<=9)
  {
   printf("\n%ld",i);
   }
   else
   {
   count=0;
   original=i;
   ctv=i;
   temp=i;
   while(ctv!=0)
   {
    ctv=ctv/10;
    count++;
    }
    index=count;
    if(count>=2)
    {
     sum=0;
     while(temp!=0)
     {
       rem=temp%10;
       power=1;
       j=1;
       while(j<=index)
       {
       power=power*rem;
       j++;
       }
       temp=temp/10;
       sum=sum+power;
      }
      if(sum==original)
      {
      printf("\n%ld",original);
      }
      }
      }
      }
    getch();
    }

