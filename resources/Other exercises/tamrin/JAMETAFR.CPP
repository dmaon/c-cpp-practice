#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int x,y;
char p;
cout<<"x ra vared konid = ";
cin>>x;
cout<<"y ra vared konid = ";
cin>>y;
p=getch();
switch(p){
case '+' : cout<<"x+y = "<<x+y;
break;
case '-': cout<<"x-y = "<<x-y;
break;
case '*' : cout<<"x*y = "<<x*y;
break;
case '/' :
case '\\' : cout<<"x/y = "<<x/y;
break;
}
getch();
}
