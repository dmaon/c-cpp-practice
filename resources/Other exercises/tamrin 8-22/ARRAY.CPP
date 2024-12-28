#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int a[3][2],b[3][2],c[3][2];
int i,j;
for(i=0;i<3;i++)
{
   for(j=0;j<2;j++)
   {
      cout<<"enter a "<<i<<","<<j<<"  = ";
      cin>>a[i][j];
     // cout<<"\n"<<a[i][j];
      }
     // cout<<"\t";
}

for(i=0;i<3;i++)
{
   for(j=0;j<2;j++)
   {
     // cout<<"enter "<<i<<","<<j<<"  = ";
     // cin>>a[i][j];
      cout<<a[i][j]<<"\t";
      }
     cout<<"\n";
}
cout<<"==========================================\n";
for(i=0;i<3;i++)
{
   for(j=0;j<2;j++)
   {
      cout<<"enter b "<<i<<","<<j<<"  = ";
      cin>>b[i][j];
     // cout<<"\n"<<a[i][j];
      }
     // cout<<"\t";
}

for(i=0;i<3;i++)
{
   for(j=0;j<2;j++)
   {
     // cout<<"enter "<<i<<","<<j<<"  = ";
     // cin>>a[i][j];
      cout<<b[i][j]<<"\t";
      }
     cout<<"\n";
}
cout<<"==========================================\n";
for(i=0;i<3;i++)
 for(j=0;j<2;j++)
  c[i][j]=a[i][j]+b[i][j];
  //==========================================================
for(i=0;i<3;i++)
 {
 for(j=0;j<2;j++)
 {
  cout<<c[i][j]<<"\t";
      }
    cout<<"\n";
}

getch();
}