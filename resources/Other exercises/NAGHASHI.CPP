#include<stdio.h>
#include<conio.h>
#include<iostream.h>
main()
{
textbackground(BLACK);
clrscr();
char a;
//do{
//cout<<"please enter char = ";
//a=getch();
//printf("%d\n",a);
//}while(a!=27);
int x=1;
int y=1;
gotoxy(x,y);
do{
a=getch();
if(a==0) a=getch();
switch(a)
{
case 77:x++;gotoxy(x,y);break;
case 75:x--;gotoxy(x,y);break;
case 80:y++;gotoxy(x,y);break;
case 72:y--;gotoxy(x,y);break;
case 114:
case 82:textbackground(RED);cprintf(" ");break;
case 66:
case 98:textbackground(BLUE);cprintf(" ");break;
case 121:
case 89:textbackground(YELLOW);cprintf(" ");break;
case 119:
case 87:textbackground(WHITE);cprintf(" ");break;
case 103:
case 71:textbackground(GREEN);cprintf(" ");break;
case 8:x--;gotoxy(x,y);textbackground(BLACK);cprintf(" ");break;
}
}while(a!=27);

getch();
}