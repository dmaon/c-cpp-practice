#include "iostream.h"
#include "conio.h"
#include "stdio.h"
main()
{
clrscr();
int x,y,z;
y=0;
x=0;
for(z=1;z<11;z++)
{
printf("\n");
for(x=0;x<z;x++)
{
y++;
printf("%d"" ",y);
}
}
getch();
}