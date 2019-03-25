#include<stdio.h>
#include<conio.h>
void main()
{
int min;
int h=0,m,i;
scanf("%d",&min);
for(i=min;i>=60;i-60)
{
h=h+1;
}
printf("the hour,min is%d,%d\n",h,i);
getch();
}
