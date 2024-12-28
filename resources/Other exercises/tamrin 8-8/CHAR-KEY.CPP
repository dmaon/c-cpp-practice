#include<iostream.h>
#include<conio.h>
#include<stdio.h>
main()
{
clrscr();
char a;
do{
cout<<"please enter code ascii = ";
a=getch();
printf("\n ascii code = %d\n",a);
}while(a!=27);
getch();
}