#include "iostream.h"
#include "conio.h"
#include "stdio.h"
main()
{
clrscr();
int i,j;
for(i=1;i<11;i++)
{
for(j=1;j<i;j++)
{
printf("%d",j);
}
printf("%d\n",i);
}
getch();
}