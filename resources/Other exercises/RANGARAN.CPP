#include<stdio.h>
#include<iostream.h>
#include<string.h>
#include<conio.h>
main()
{
//clrscr();
textbackground(BLACK);
clrscr();
for(int i=0;i<10000;i++)
{
textbackground(i*9);
cprintf("\n");
}
getch();
}