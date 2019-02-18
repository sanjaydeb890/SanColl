#include<stdio.h>
#include<conio.h>
void main()
{
int s;
printf("Input");
scanf("%d",&s);
if(s>=0){
printf("Positive");
}
if(s<=0){
printf("Negative");
}
if(s==0)
{
printf("Zero");
}
getch();
}
