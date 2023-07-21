#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
 clrscr();
 printf("ENTER YOUR VALUE");
 scanf("%d%d%d",&a,&b,&c);
 if(a<b)
 {
  if(a<c)
  {
  printf("A IS SMALL");
  }
  else
  {
  printf("C IS SMALL");
  }
 }
 else
 {
  if(b<c)
  {
  printf("bB IS SMALL");
  }
  else
  {
  printf("C IS SMALL");
  }
 }
 getch();
}
