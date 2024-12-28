#include<stdio.h>
#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>
#include<GRAPHICS.H>
#include<values.h>


int getmax(int a,int b)
{
   if (a>b) return a;
   else return b;
}

main()
{
   clrscr();
   int n;
   int i;
   int number;
   int max=-MAXINT -1;
   printf("please enter a number : ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      printf("number %d : ",i);
      scanf("%d",&number);
      max=getmax(number,max);
   }
   cout<<"Max = "<<max;
   getch();
}