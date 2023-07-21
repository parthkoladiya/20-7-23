#include<stdio.h>
#include<conio.h>
void main()
{

char s,m,t,w,h,f,a,day;
 clrscr();
 printf("ENTER YOUR 1 CHARAETER==>");
 scanf("%c",&day);
 if (day=='s')
 {
    printf("sunday");
 }
 else if(day=='m')
 {
  printf("monday");
 }
 else if(day=='t')
 {
 printf("thesday");
 }
 else if(day=='w')
 {
 printf("wednesday");
 }
 else if(day=='h')
 {
 printf("thrusday");
 }
 else if(day=='f')
 {
 printf("friday");
 }
 else if(day=='a')
 {
 printf("saturday");
 }
 else
 {
 printf("invalide value");
 }
 getch();
}