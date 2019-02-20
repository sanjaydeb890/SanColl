#include<stdio.h>
#include<conio.h>
void main()
{
int num,expo;
long double res=1;
printf("Enter Number and the power");
scanf("%d%d:,&num,&expo);
while(expo!=0)
{
res*=num;
--expo;
}
printf("Output= %Lf",res);
getch();
}
