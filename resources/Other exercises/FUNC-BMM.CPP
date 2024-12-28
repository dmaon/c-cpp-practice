#include<iostream.h>
#include<conio.h>

int bmm(int n,int m)
{
   int r;
   do{
      r=n%m;
      n=m;
      m=r;
   }while(r!=0);
   return n;
}

main()
{
clrscr();
int n;
int m;
cout<<"n ra vared namaeed = ";
cin>>n;
cout<<"m ra vared namaeed = ";
cin>>m;
cout<<bmm(n,m);
getch();
}