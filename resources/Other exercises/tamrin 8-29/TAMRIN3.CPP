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

 if (name[i]==' ' || name[i]==',' ||  name[i]=='.' ) cout<<"\n";
 else
 cout<<name[i];
}
getch();
}