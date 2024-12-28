#include<iostream.h>
#include<conio.h>
int jogvafard(int x)
{
   int a;
   if(x%2==0)
   a=2;
   else
   a=1;
   return a;
}


main()
{
clrscr();
int x;
cout<<"please enter a number : ";
cin>>x;
cout<<jogvafard(x);
getch();
}