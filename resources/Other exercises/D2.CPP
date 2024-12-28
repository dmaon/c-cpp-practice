#include <iostream.h>
#include <conio.h>
#include <math.h>
main()
{
clrscr();
int a,b,c,delta,x1,x2;
cout<<"a ra vared konid";
cin>>a;
cout<<"b ra vared konid";
cin>>b;
cout<<"c ra vared konid";
cin>>c;
delta=(b*b)-(4*a*c);
cout<<"delta"<<delta;
x1=(-b+sqrt(delta))/(2*a);
x2=(-b-sqrt(delta))/(2*a);
cout<<"  x1 = "<<x1<<"  x2 =   "<<x2;
getch();
}