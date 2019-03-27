#include<stdio.h>
void main()
{
char str[100],i,c=0,s;
printf("enter a character");
for(s=0;s<=100;s++)
{
scanf("%c",&str[s]);
}
for(i=0;str[i]!='\0';i++)
{
if((str[i]>'a' &&str[i]<'z')||(str[i]>'A' &&str[i]<'Z'))
{
c++;
}
}
printf("%d",c);
}
