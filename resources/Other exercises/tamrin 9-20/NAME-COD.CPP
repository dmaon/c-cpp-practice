#include<conio.h>
#include<iostream.h>

struct book
{
   int code;
   char name[30];
   int unit;
}

main()
{
   book list[4];
   clrscr();
   int  i;
   for(i=0;i<5;i++)
   {
      cout<<"please enter a code : ";
      cin>>list[i].code;
      cout<<"please enter a name : ";
      cin>>list[i].name;
      cout<<"plesae enter a unit : ";
      cin>>list[i].unit;
   }
   cout<<"***********************************************************"<<"\n";
   cout<<"Name"<<"\t"<<"family"<<"\t"<<"code"<<"\n";
    cout<<"----------------------------------------------------------"<<"\n";

   int sum=0;
   for(i=0;i<5;i++)
   {
      cout<<list[i].code<<"\t";
      cout<<list[i].name<<"\t";
      cout<<list[i].unit<<"\t";
      sum+=list[i].unit;
      cout<<"\n";
   }
   cout << "sum = " << sum ;
   getch();

}

