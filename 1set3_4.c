#include<stdio.h>
#include<conio.h>
void main()
{
int arr[20],size,i,j,temp=0;
printf("Enter size of array");
scanf("%d",&size);
printf("Enter size of array");
for(i=0;i<size;i++)
{
scanf("%d",arr[i]);
}
for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
if(arr[i]>arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=arri];
}
}
}
for(i=0;i<size;i++)
{
printf("%d",arr[i]);
}
getch();
}
