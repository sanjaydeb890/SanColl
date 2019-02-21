#include<stdio.h>
#include<conio.h>
void main()
{
int up,low,org=0,rem,result=0;
printf("Enter the limit");
scanf("%dd",&up,&low);
for(i=up;i<=low;i++)
{
org=i;
while(i!=0)
{
rem=org%10;
result+=rem*rem*rem;
org/=10;
}
if(org==i)
{
printf("%d",org);
}
}
getch();
}
