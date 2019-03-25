#include <stdio.h>
int main(void) {
int a[100],given,i,j,temp;
int median=0;
scanf("%d",&given);
for(i=0;i<given;i++)
scanf("%d",&a[i]);
for(i=0;i<given;i++)
{
for(j=i+1;j<given;j++)
{
if(a[j]<a[i])
{
temp=a[j];
a[j]=a[i];
a[i]=temp;
}
}
}
if(given%2==0) {
median=((a[given/2] + a[given/2 - 1]) / 2.0);
printf("%d",median);
} else { 
median=a[given/2];
printf("%d",median);
}     
getch();
}
