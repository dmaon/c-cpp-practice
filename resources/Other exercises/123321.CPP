
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
main()
{
   char ch;
   //ch=getch();
   int i=0
   do{
   i=i+1;
   //clrscr();
   ch=getch();
   randomize();
   window(rand()%10,rand()%10,rand()%40,rand()%11);
   textcolor(GREEN+BLINK);
   //textbackground(W);
   cprintf("This is a test\r\n");
   }while(i==20);
   getch();
   return 0;
}