#include<stdio.h>
#include<conio.h>
void main()
{
long double start,end,i;
printf("Enter Interval");
scanf("%Lf%Lf",&start,&end);
for(i=start+1;i<end;i++)
{
if(i%2==0)
{
printf("%Lf ",i);
}
}
getch();
}
