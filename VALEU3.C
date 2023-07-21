#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("ENTER YOUR 3 VALUE==>");
scanf("%d%d%d",&a,&b,&c);
if (a>b)
{
 if (a>c)
 {
 printf("A IS BIG");
 }
 else
 {
 printf("C IS BIG");
 }
}
else
{
 if(b>c)
 {
  printf("B IS BIG");
 }
 else
 {
 printf("C IS BIG");
 }
}
getch();
}