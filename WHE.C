#include<stdio.h>
#include<conio.h>
void main()
{
 char n;
 clrscr();
 printf("Press W = Winter\tM = Moonsoon\tS = Summer\n");
 printf("Enter Your Value ==>> ");
 scanf("%c",&n);

 if(n=='W')
 {
   printf("Winter");
 }
 else if(n=='M')
 {
   printf("Moonsoon");
 }
 else if(n=='S')
 {
  printf("Summer");
 }
 else
 {
  printf("Invaild Number");
 }


 getch();

}