#include"iostream.h"
#include"conio.h"
#include"stdio.h"
main()
{
clrscr();
int n,f,c;
cout<<"enter a number ";
cin>>n;
f=1;
c=1;

for(;c<=n;f=f*c,c=c+1);

cout<<f;
getch();
}