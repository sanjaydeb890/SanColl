#include<stdio.h>
#include<conio.h>
void main()
{
int size,arr[20],i,small;
printf("Enter the size of array");
scanf("%d",&size);
printf("Enter the array element");
for(i=0;i<=size;i++)
{
scanf("%d",arr[i]);
}
small=arr[0];
for(i=1;i<=size;i++)
{
if(small>arr[i])
{
small==arr[i];
}
}
printf("%d",small);
getch();
}
