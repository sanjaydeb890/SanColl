#include<stdio.h>
#include<conio.h>
void main()
{
int start,end,flag,i;
printf("Enter interval"):
scanf("%d%d",&start,&end);
while(start<end)
{
flag=0;
for(i=2;i<=start/2;i++)
{
if(start%i==0)
{
flag=1;
break;
}
}
if(flag==1)
{
printf("%d ",start);
}
++start;
}
getch();
}
