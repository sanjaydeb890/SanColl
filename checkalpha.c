#include<stdio.h>
#include<conio.h>
void main()
{
char a;
  printf("Input");
  scanf("%c",&a);
if((a>='a'&& a<='z')||(a>='A'&& a<='Z'))
{
printf("Alphabet");
}
else
{
printf("No");
}
getch();
}
