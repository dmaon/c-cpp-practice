#include<conio.h>
#include<dos.h>
#include<stdio.h>
#include<iostream.h>
long fact(long m)
{
 long f=1;
 for(int i=1;i<=m;i++)
 f*=i;
 return f;
 }

main()
{
   clrscr();
   int n,r,nr;
   long factk;
   cout<<"please enter n = ";
   cin>>n;
   cout<<"please enter r = ";
   cin>>r;
   nr=n-r;
   factk=fact(n)/(fact(r)*fact(nr));
   cout<<"fact="<<factk;
   getch();
   }
