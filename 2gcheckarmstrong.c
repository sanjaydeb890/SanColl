#include<stdio.h>
#include<conio.h>
void main()
{
int num,org=0,rem,result=0;
printf("Enter the number");
scanf("%d",&num);
org=num;
while(org!=0)
{
rem=org%10;
result+=rem*rem*rem;
org/=10;
}
if(org==num)
{
printf("Yes");
}
else
{
printf("No");
}
getch();
}
