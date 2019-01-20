#include<stdio.h>
void main()
{
int a,t,l=0,b;

clrscr();
scanf("%d",&a);
while(a)
{
b=a%10;
a=a/10;
l++;
}
//a=a/10;

printf("%d",l);
getch();
}