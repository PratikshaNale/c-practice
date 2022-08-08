#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],temp=0,start,mid,end,i,len;
clrscr();
printf("Enter the element\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("display the array\n");
for(i=0;i<5;i++)
{
printf("a[%d]\t %d\n",i,a[i]);
}
printf("reverse array\n");
{
len=sizeof(a)/sizeof(int);
end=len-1;
mid=len/2;
for(start=0;start<mid;start++)
{
temp=a[start];
a[start]=a[end];
a[end]=temp;
end--;
}
for(i=0;i<5;i++)
{
printf("%d\t",a[i]);
}
getch();
}
}


