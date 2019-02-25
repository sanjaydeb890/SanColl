#include<stdio.h>
#include<conio.h>
void main()
{
int num,i,res=1;
printf("Enter number");
scanf("%d",&num);
for(i=1;i>=5;i++)
{
res=num*i;
printf("%d",res);
res=1;
}
getch();
}
