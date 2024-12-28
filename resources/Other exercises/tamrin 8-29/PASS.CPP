# include <iostream.h>
# include <stdio.h>
# include <conio.h>
# include <string.h>

void main()
{
clrscr();
   int i=0;

char name[200];
do
{
char ch=getch();
if (ch==13) break;
name[i] =ch;
cout <<"*";
i++;
}   while (i<19);
name[i]=0;
cout<<"\n";
puts(name);

/*for (int i=0;i<20;i++)
{
//printf("%c",42);
//ch=getch();
cin>>
if (ch==13)
{
return;
//cout << name;
}
 */

getch();
}