#include<conio.h>
#include<iostream.h>

struct book
{
   char name[20];
   char title[20];
   char designer[20];
   int year;
};


book getbook()
{
   /*for(i=0;i<4;i++)
   {*/
      book list;
      cout<<"please enter a name for book : ";
      cin>>list.name;
      cout<<"please enter a name for title : ";
      cin>>list.title;
      cout<<"please enter a namefor designer : ";
      cin>>list.designer;
      cout<<"plesae enter a number for year : ";
      cin>>list.year;
      return list;
   //}
}


void printbook(book list)
{
   /*int i;
   for(i=0;i<4;i++)
   {
    if(list[i].year==year)
    { */
      cout<<list.name<<"\t";
      cout<<list.title<<"\t";
      cout<<list.designer<<"\t"<<"\t";
      cout<<list.year<<"\t";
      cout<<"\n";
    //}
   }

//}
main()
{
   book list[4];
   clrscr();
   int  i,year;
   for(i=0;i<4;i++)
      list[i]=getbook();
      cout<<"***********************************************************"<<"\n";
      cout<<"Name"<<"\t"<<"Title"<<"\t"<<"Designer"<<"\t"<<"Year"<<"\n";
      cout<<"----------------------------------------------------------"<<"\n";
   for(i=0;i<4;i++)
      printbook(list[i]);
   getch();

}

