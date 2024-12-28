#include <iostream.h>
#include <conio.h>

void hanoi(int n,char a,char b,char c)
{
   if(n==1) cout<<a<<" to "<<c<<endl;
   else
   {
      hanoi(n-1,a,c,b);
      cout<<a<<" to "<<c<<endl;
      hanoi(n-1,b,a,c);
   }
}


void main()
{
   clrscr();
   int n;
   char a='A',b='B',c='C';
   cout<<"please enter a number for n : ";
   cin>>n;
   hanoi(n,a,b,c);
   getch();
}