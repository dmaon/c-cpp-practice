#include<conio.h>
#include<stdio.h>
main()
{
//clrscr();
textbackground(BLACK);
clrscr();
int i,j;

//rang dakhel
for(j=8;j<=20;j++){
gotoxy(15,j);
for(i=1;i<=50;i++){
textbackground(BLUE);
cprintf(" ");
}
}

//ghab rast
for(j=8;j<=20;j++){
gotoxy(65,j);
for(i=1;i<=3;i++){
textbackground(WHITE);
cprintf("%c",221);
}
}


//Ghab chap
for(j=8;j<=20;j++){
gotoxy(15,j);
for(i=1;i<=3;i++){
textbackground(WHITE);
cprintf("%c",221);
}
}




//Ghab bala
for(j=15;j<=67;j++){
gotoxy(j,7);
for(i=1;i<=1;i++){
textbackground(WHITE);
cprintf("%c",220);
gotoxy(15,20);
}
}



//Ghab paiin
for(j=15;j<=65;j++){
gotoxy(j,20);
for(i=1;i<=1;i++){
textbackground(WHITE);
cprintf("%c",220);
}
}
getch();
}





