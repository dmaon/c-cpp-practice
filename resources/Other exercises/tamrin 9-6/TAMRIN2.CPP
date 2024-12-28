#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
main()
{
clrscr();
char str[5][10]={"asd","reza","asdas","jkasd","ar"};
char a[10];
/*for(int i=0;i<10;i++)
{
gets(str[i]);
}*/
cout<<"please enter a number for serach : ";
gets(a);
for(int j=0;j<5;j++)
{
if (strcmp(str[j],a)==0)
{
 cout<<"finded : "<<j;
 break;
}
}
if(j==5) cout<<"not finded";


// break;
//puts("not finded");
//}
getch();
}