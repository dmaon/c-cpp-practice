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
		if(str[i]+1 >= 65 && str[i]+1 <=90 || str[i]+1 >= 97 && str[i]+1 <=122)
			printf("%c",str[i]+1);
	}

	getch();
}