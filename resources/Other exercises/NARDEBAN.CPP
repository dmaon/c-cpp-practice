#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int m,n,r;
cout<<"m ra vared konid = ";
cin>>m;
cout<<"n ra vared konid = ";
cin>>n;
do{
   r=m%n;
   m=n;
   n=r;
   }while(r!=0);
cout<<"mag =  "<<m;
getch();
}