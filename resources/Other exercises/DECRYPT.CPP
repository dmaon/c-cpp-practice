#include<iostream.h>
#include<conio.h>
#include<stdio.h>

#define max 1000

void main()
{
	clrscr();

	char str[max];

	gets(str);

	for(int i=0;str[i]!=0;i++)
	{
		printf("%c",str[i]-1);
	}

	getch();
}