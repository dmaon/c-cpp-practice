#include "iostream.h"
#include "conio.h"
#include "stdio.h"
void mah(int m)
{
switch(m)
{
case 1:cout<<"Farvardin";
break;
case 2:cout<<"Ordibehesht";
break;
case 3:cout<<"khordad";
break;
case 4:cout<<"tir";
break;
case 5:cout<<"mordad";
break;
case 6:cout<<"shahrivar";
break;
case 7:cout<<"mehr";
break;
case 8: cout<<"aban";
break;
case 9: cout<<"azar";
break;
case 10: cout<<"day";
break;
case 11: cout<<"bahman";
break;
case 12: cout<<"esfand";
break;
default :cout<<"ERORR";
}
}

int ru(int x,int y)
{
int s;
s=((x-1)*31)+y;

return s;
}
void writeday(int d)
{
int t;

t=(d%7)+1;
switch(t)
{
case 1:cout<<"shanbe";break;
case 2:cout<<"1shanbe";break;
case 3:cout<<"2shanbe" ;break;
case 4:cout<<"3shanbe" ;break;
case 5:cout<<"4shanbe";break;
case 6:cout<<"5shanbe";break;
case 7:cout<<"jomee";break;
default:cout<<"error";
}
}

main()
{
clrscr();
int s;
cout<<"shomareye mah ra vared konid:";
cin>>s;
mah(s);
cout<<"\n==========================================\n";
int d,l;
cout<<"Mah ra vared konid:";
cin>>d;
cout<<"ruz ra vared konid:";
cin>>l;
cout<<ru(d,l);
cout<<"\n==========================================\n";
int t;
t=ru(d,l);
writeday(t);
getch();
}