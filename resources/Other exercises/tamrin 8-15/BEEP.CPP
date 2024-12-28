#include<iostream.h>
#include<dos.h>
#include<conio.h>
#include<stdio.h>
main()
{
clrscr();
char a;
a=getch();
do{
a=getch();
switch(a)
{
case 49:sound(1000);
delay(100);
nosound();
break;
case 50:sound(1200);
delay(100);
nosound();
break;
case 51:sound(1300);
delay(100);
nosound();
break;
case 52:sound(1400);
delay(100);
nosound();
break;
case 53:sound(1500);
delay(100);
nosound();
break;
case 54:sound(1600);
delay(100);
nosound();
break;
case 55:sound(1700);
delay(100);
nosound();
break;
case 56:sound(1600);
delay(100);
nosound();
break;
case 57:sound(1700);
delay(100);
nosound();
break;
}
}while(a!=27);
getch();
}