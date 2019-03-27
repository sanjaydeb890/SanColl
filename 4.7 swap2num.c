#include<stdio.h>
#include<conio.h>
void main()
{
    int a=0,b=0,c=0;
    printf("Enter 2 number");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("\n%d %d",a,b);
    getch();
}
