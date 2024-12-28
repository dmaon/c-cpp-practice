#include "iostream.h"
#include "conio.h"
#include "stdio.h"
main()
{
clrscr();
int x,y;
char c;
x=1;
y=2;
gotoxy(x,y);
while(c!=27)
{
c=getch();
if (c==0) c=getch();
switch(c)
{
case 77:x++;
gotoxy(x,y);
break;
case 75:x--;
gotoxy(x,y);
break;
case 72:y--;
gotoxy(x,y);
break;
case 80:y++;
gotoxy(x,y);
break;
case 13:y++;
x=1;
gotoxy(x,y);
break;
case 8:x--;
cout<<" ";
gotoxy(x,y);
break;
case 71:x=1;
gotoxy(x,y);
default:cout<<c;
x++;
}
}
getch();
}