#include <iostream.h>
#include <conio.h>
#include <stdio.h>
main()
{
clrscr();
gotoxy(5,10);
printf("%c",201);
for (int i=6 ;i<=75;i++)
{
	gotoxy(i,10);
	printf("%c",205);
}
gotoxy(75,10);
printf("%c",187);
for (i=11;i<=20;i++)
{
	gotoxy(75,i);
	printf("%c",186);
}
gotoxy(5,20);
printf("%c",200);
for (i=6;i<=75;i++)
{
	gotoxy(i,20);
	printf("%c",205);
}
gotoxy(75,20);
printf("%c",188);
for (i=11;i<=19;i++)
{
	gotoxy(5,i);
	printf("%c",186);
}
gotoxy(34,15);
cout<<"  WELCOME\n";
gotoxy(34,12);
cout<<"   C++:\n";
gotoxy(32,16);
for(int o=10;o<=20;o++)
{
gotoxy(76,o);
printf("%c",177);
}
for (int z=8;z<=75;z++)
{
gotoxy(z,21);
printf("%c",177);
}
getch();
}