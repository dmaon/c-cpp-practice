# include <iostream.h>
# include <conio.h>
#include <math.h>
main()
{
clrscr();
int a,c,b,d,x1,x2;
cout<<"a ra vared konid: ";
cin>>a;
cout<<"b ra vared konid: ";
cin>>b;
cout<<"c ra vared konid: ";
cin>>c;
d=(b*b)- 4 * a * c;
x1=(-b-sqrt(d))/(2*a);
x2=(-b+sqrt(d))/(2*a);
cout<<"Delta = "<<d<<"  ";
cout<<"x1= "<<x1<<"  ";
cout<<"x2= "<<x2;
//cout<<"Delta = "<<d;
getch();
}