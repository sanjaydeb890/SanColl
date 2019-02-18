#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,arr[50],i,j=0,sum=0;
printf("Enter value of N and K");
scanf("%d%d",&n,&k);
for(i=1;i<=n;i++)
{
j=i-1;
arr[j]=i;
}
for(i=0;i<k;i++)
{
sum=sum+arr[i];
}
printf("%d",sum);
getch();
}
