#include <iostream.h>
#include <conio.h>
#include <stdio.h>
main()
{
clrscr();
int d[7];
int x,z,y;
for(int i=1;i<=7;i++)
{
cout<<"enter :";
cin>>d[i];
}
x=-32768;
y=32767;
for(int k=1;k<=7;k++)
{
if(d[k]>x) x=d[k];
if(d[k]<y) y=d[k];
}
cout<<"bishtarin dama= "<<x;
cout<<"kamtarin dama= "<<y;
getch();
}