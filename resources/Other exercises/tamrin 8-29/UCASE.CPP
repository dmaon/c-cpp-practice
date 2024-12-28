# include <iostream.h>
# include <stdio.h>
# include <conio.h>
# include <string.h>

void main()
{
clrscr();
char name[50],ch,ch1;
gets(name);
for (int i =0;name[i]!=0;i++)
{
 ch=(char)name;
 if (name[i]>=65 && name[i]<=90 ) cout<<name[i];
}
getch();
}