#include<GRAPHICS.H>
#include <conio.h>

int main(void)
{
textbackground(BLACK);
   /* clear the screen */
  clrscr();
int i;
char c;
   /* create a text window */


//window(15,15,45,16);
//textcolor(GREEN+BLINK);
gotoxy(1,20);
for(i=1;i<=500;i++){
//clrscr();
//textcolor(i);
//gotoxy(1,20);
textbackground(10);
cprintf(" ");
}
gotoxy(1,1);
for(i=1;i<=1440;i++){
textbackground(3);
cprintf(" ");
}
int x=40;
int y=12;
gotoxy(x,y);
textcolor(YELLOW);
cprintf("START GAME\r\n");
//c=getch();
//if(c=='a') cprintf("");
cprintf("                                            ");
getch();
}
