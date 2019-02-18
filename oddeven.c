#include<conio.h>
#include<stdio.h>
void main()
{
int num;
printf("Input");
scanf("%d",&num);
if(num%2==1)
{
printf("Odd");
}
else if(num%2==0)
{
printf("even");
}
else{
printf("Invalid");
}
getch();
}
