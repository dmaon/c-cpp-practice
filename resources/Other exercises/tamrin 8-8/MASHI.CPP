#include "iostream.h"
#include "conio.h"
#include "stdio.h"
main()
{
clrscr();
int x,y;
char c;
x=40;
y=12;
gotoxy(x,y);
cout<<"*";
while(c!=27)
{
c=getch();
if (c==0) c=getch();
switch(c)
{
case 77:x++;
clrscr();
gotoxy(x,y);
cout<<"*";
break;
case 75:x--;
clrscr();
gotoxy(x,y);
cout<<"*";
break;
case 72:y--;
clrscr();
gotoxy(x,y);
cout<<"*";
break;
case 80:y++;
clrscr();
gotoxy(x,y);
cout<<"*";
break;
}
}
getch();
}