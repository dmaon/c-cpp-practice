#include<iostream.h>
#include<conio.h>

class student
{
   private:
   char code[10];
   char name[30];
   float avg;
   public:
   void read();
   void print();
};

void student::read()
{
   cout<<"please enter a number for code : ";
   cin>>code;
   cout<<"please enter a name : ";
   cin>>name;
   cout<<"please enter a number for avg : ";
   cin>>avg;
}

void student::print()
{
cout<<"code = "<<code<<"\n";
cout<<"name = "<<name<<"\n";
cout<<"avg = "<<avg<<"\n";
}

main()
{
   clrscr();
   student s1;
   int n;
   cout<<"please enter a number :";
   cin>>n;
   for(int i=0;i<n;i++)
   {
      s1.read();
      s1.print();
   }
   getch();


}