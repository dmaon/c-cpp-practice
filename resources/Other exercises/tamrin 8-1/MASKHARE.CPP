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
while(c!='q')
{
c=getch();
if (c=='a')x--;
clrscr();
gotoxy(x,y);
cout<<"*";
if (c=='d')x++;
clrscr();
gotoxy(x,y);
cout<<"*";
if (c=='w')y--;
clrscr();
gotoxy(x,y);
cout<<"*";
if (c=='x')y++;
clrscr();
gotoxy(x,y);
cout<<"*";
}
getch();

}