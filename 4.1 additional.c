#include<stdio.h>
#include<string.h>
int main()
{
char s[100];int j;
int len,count=0,i,ch,sum=0;
for(j=0;j<=100;j++)
{
scanf("%c",&s[j]);
}
len=strlen(s);
for(i=0;i<len;i++)
{
if(s[i]==' ')
count++;
sum++;
}
printf("\n%d",count);
printf("\n%d",len);
ch=sum-count;
printf("\n%d",ch);
return 0;
}
