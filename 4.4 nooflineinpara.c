#include <stdio.h>
int main()
{
	char str[100];
	int i,count=1;
	printf("enter the sentence:");
	for(i=0;i<=100;i++)
{
scanf("%c",&str[i]);
}
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='.')
	{
			count=count+1;
	}
	}
	printf("\nno of lines is=%d",count);
getch();
}
