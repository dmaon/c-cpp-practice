#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int a[9];
int i;
//gereftan
for(i=0;i<10;i++)
{
cout<<"please enter number "<<i<<" = ";
cin>>a[i];
}
//+2
for(i=0;i<10;i++)
if(a[i]<10) a[i]=a[i]+2;

//cout
for(i=0;i<10;i++)
cout<<a[i]<<"\n";
getch();
}