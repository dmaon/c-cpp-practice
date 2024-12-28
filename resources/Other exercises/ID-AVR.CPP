#include<stdio.h>
#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>
#include<GRAPHICS.H>
#include<values.h>

main()
{
   clrscr();
   int id[100];
   float avr[100];
   int i;
   float m=0;
   int n;
   cout<<"please enter n : ";
   cin>>n;
   for(i=0;i<n;i++)
   {
      printf("please enter id and avr :");
      scanf("%d %f",&id[i],&avr[i]);
      m+=avr[i];
   }
   m/=n;
   for(i=0;i<n;i++)
   {
      if(avr[i]>=m+1)
	 cout<<id[i]<<" = A"<<"\n";
      else if(avr[i]>=m-1)
	 cout<<id[i]<<" = B"<<"\n";
      else cout<<id[i]<<" = C"<<"\n";
   }
   getch();
}
