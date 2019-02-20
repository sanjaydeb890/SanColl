#include<stdio.h>
#include<conio.h>
void main()
{
int num,expo;
printf("Enter Number and the power");
scanf("%d%d:,&num,&expo);
while(expo!=0)
{
num*=num;
expo--;
}
printf("Output= %d",num);
getch();
}
