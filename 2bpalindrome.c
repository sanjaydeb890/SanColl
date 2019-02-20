#include<stdio.h>
#include<conio.h>
void main()
{
int num,original,reverse,rem;
printf("Enter the number");
scanf(%d",&num);
original=num;
while(num!=0)
{
rem=num%10;
reverse=reverse*10+rem;
num/=10;
}
if(original==reverse)
{
Printf("Yes");
}
else{
printf("No");
}
getch();
}
