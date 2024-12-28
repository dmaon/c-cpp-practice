#include<iostream.h>
#include<conio.h>

void mah(int m)
{
switch(m)
{
case 1:cout<<"Farvardin";
break;
case 2:cout<<"Ordibehesht";
break;
case 3:cout<<"Khordad";
break;
case 4:cout<<"Tir";
break;
case 5:cout<<"Mordad";
break;
case 6:cout<<"Shahrivar";
break;
case 7:cout<<"Mehr";
break;
case 8:cout<<"Aban";
break;
case 9:cout<<"Azar";
break;
case 10:cout<<"Dey";
break;
case 11:cout<<"Bahman";
break;
case 12:cout<<"Esfand";
break;
}
}
//===================================================================
int day(int d,int m)
{
int a=0;
if(m<=6)
a=(m-1)*31+d;
else
a=(m-7)*30+186+d;
return a;
}
//===================================================================
int dh(int d)
{
   int c;
   c=d%7;
   switch(c)
   {
      case 1:cout<<"3 Shanbe";
      break;
      case 2:cout<<"4 shanbe";
      break;
      case 3:cout<<"5 Shanbe";
      break;
      case 4:cout<<"jome" ;
      break;
      case 5:cout<<"Shanbe" ;
      break;
      case 6:cout<<"1 Shanbe" ;
      break;
      case 0:cout<<"2 Shanbe";
      break;
     }
   return d;
}
//===========================================================================
main()
{
clrscr();
int d;
cout<<"please enter rooz = ";
cin>>d;
dh(d);
getch();
}
//==========================================================================
/*void main()
{
clrscr();
int m;
cout<<"please enter mah = ";
cin>>m;
mah(m);
getch();
}*/
//==========================================================================
/*main()
{
clrscr();
int d,m;
cout<<"please enter rooz = ";
cin>>d;
cout<<"please enter mah = ";
cin>>m;
cout<<day(d,m);
getch();
}*/
//==========================================================================