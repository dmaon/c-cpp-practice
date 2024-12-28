#include "iostream.h"
#include "conio.h"
main()
{
clrscr();
int a,b,r;
cout<<"please enter a number: ";
cin>>a;
cout<<"please enter a tired number: ";
cin>>b;
for(;r!=0;)
{
r=a-(a/b)*b;
a=b;
b=r;
}
cout<<"B.M.M= "<<a;
getch();
}
