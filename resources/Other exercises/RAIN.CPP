#include<iostream.h>
#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
textbackground(1);
int a,b,c;
cprintf("please enter a number = ");
scanf("%d",&a);
for(b=1;b<=a;b++) {
cprintf("\n %d",b);
}
for(c<=a;c=1;c--){
cprintf("\n %d",c);
}
getch();
}