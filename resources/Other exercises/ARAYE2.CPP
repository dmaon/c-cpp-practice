#include "iostream.h"
#include "conio.h"
#include "stdio.h"
main()
{
clrscr();
int a[9];
for(int i=0;i<10;i++)
{
cout<<i<<" :";
cin>>a[i];
}
for(i=0;i<10;i++)
if(a[i]<10) a[i]=a[i]+2;
cout<<"======================================";
cout<<"\n";
for(i=0;i<10;i++)
{
cout<<a[i];
cout<<"\n";
}
getch();
}