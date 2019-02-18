#include<stdio.h>
#include<conio.h>
void main()
{
char a;
printf("Input");
scanf("%c",&a);
if(a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U')
{
printf("Vowel");
}
else if((a>='b'&& a<='d')||(a>='f'&& a<='h')||(a>='j'&& a<='n')||(a>='p'&& a<='t')||(a>='v'&& a<='z')||(a>='B'&& a<='D')||(a>='F'&& a<='H')||(a>='J'&& a<='N')||(a>='P'&& a<='T')||(a>='V'&& a<='Z'))
{
printf("Consonant");
}
else{
printf("Invalid");
}
getch();
}
