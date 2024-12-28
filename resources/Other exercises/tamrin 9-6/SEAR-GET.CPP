#include<iostream.h>
#include<conio.h>
#include<stdio.h>


void searcharray(int a[],int n,int x)
{
   for(int i=0;i<n;i++)
       if(a[i]==x)
       {
       cout<<"found!";
       break;
       }
      if(i==n) cout<<"not found";

}

void printarray(int a[],int n)
{
   for(int i=0;i<n;i++)
       cout<<a[i];
}

void getarr(int a[],int n)
{
  //int a[5];
  for(int i=0;i<n;i++)
     cin>>a[i];
}

main()
{
  clrscr();
  //clrscr();
  int a[20];
  getarr(a,5);
  printarray(a,5);
  int x;
  cout<<"\n please enter a number : ";
  cin>>x;

  searcharray(a,5,x);
  getch();
 }
