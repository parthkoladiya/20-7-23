#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e;
clrscr();
printf("ENTER YOUR 5 VALUE==>");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
if(a<b)
{
  if(a<c)
  {
    if (a<d)
    {
      if(a<e)
      {
      printf("A Is SMALL");
      }
      else
      {
      printf("E Is SMALL");
      }
    }
    else
    {
      if(c<d)
      {
	if(c<e)
	{
	printf("C IS SMALL");
	}
	else
	{
	printf("E Is SMALL");
	}
      }
      else
      {
      printf("E Is SMALL");
      }
    }


   if(d<e)
   {
   printf("\nD Is SMALL");
   }
   else
   {
   printf("E is SMALL");
   }




getch();
}

}

}