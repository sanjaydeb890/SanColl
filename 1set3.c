#include<stdio.h>
#include<conio.h>
void main()
{
int size,arr[20],i,large;
printf("Enter the size of array");
scanf("%d",&size);
printf("Enter the array element");
for(i=0;i<=size;i++)
{
scanf("%d",arr[i]);
}
large=arr[0];
for(i=1;i<=size;i++)
{
if(large<arr[i])
{
large==arr[i];
}
}
printf("%d",large);
getch();
}
