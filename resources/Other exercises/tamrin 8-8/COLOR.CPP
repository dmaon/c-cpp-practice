#include<GRAPHICS.H>
#include <conio.h>

int main(void)
{
textbackground(BLACK);
clrscr();
int i;
char c;
for(int j=8;j<=20;j++){
gotoxy(20,j);
for(i=1;i<=40;i++){
textbackground(3);
cprintf(" ");
}
}

for(j=8;j<=20;j++){
gotoxy(60,8);
//for(i=1;i<=40;i++){
textbackground(BLUE);
cprintf(" ");
//}
}

for(j=8;j<=20;j++){
gotoxy(60,9);

textbackground(BLUE);
cprintf(" ");

}
//gotoxy(1,1);
//for(i=1;i<=1440;i++){
//textbackground(3);
//cprintf(" ");
//}
//int x=40;
//int y=12;
//gotoxy(x,y);
//textcolor(YELLOW);
//cprintf("START GAME\r\n");
//c=getch();
//if(c=='a') cprintf("");
//cprintf("                                            ");
getch();
}
