#include<iostream.h>
#include<conio.h>

class rectangle
{
   private:
   int x;
   int y;
   public:
   void getxy();
   void printm();
   void prints();
};

void rectangle::getxy()
{
   cout<<"please enter a number for arz : ";
   cin>>x;
   cout<<"please enter a number for tool : ";
   cin>>y;
}

void rectangle::printm()
{
   int m;
   m=(x+y)*2;
   cout<<"M = "<<m;
}

void rectangle::prints()
{
   int s;
   s=x*y;
   cout<<"S = "<<s;
}

main()
{
   clrscr();
   rectangle list;
   list.getxy();
   list.prints();
   cout<<"\n";
   list.printm();
   getch();
}