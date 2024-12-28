#include<conio.h>
#include<iostream.h>

struct book
{
   char name[20];
   char title[20];
   char designer[20];
   int year;
}

main()
{
   book list[4];
   clrscr();
   int  i;
   for(i=0;i<4;i++)
   {
      cout<<"please enter a name for book : ";
      cin>>list[i].name;
      cout<<"please enter a name for title : ";
      cin>>list[i].title;
      cout<<"please enter a namefor designer : ";
      cin>>list[i].designer;
      cout<<"plesae enter a number for year : ";
      cin>>list[i].year;
   }
   cout<<"***********************************************************"<<"\n";
   cout<<"Name"<<"\t"<<"Title"<<"\t"<<"Designer"<<"\t"<<"Year"<<"\n";
    cout<<"----------------------------------------------------------"<<"\n";

   for(i=0;i<4;i++)
   {
      cout<<list[i].name<<"\t";
      cout<<list[i].title<<"\t";
      cout<<list[i].designer<<"\t"<<"\t";
      cout<<list[i].year<<"\t";
      cout<<"\n";
   }
   getch();

}

