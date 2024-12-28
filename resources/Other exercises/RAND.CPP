#include<iostream.h>
#include<conio.h>
#include<time.h>
#include <stdlib.h>
main()
{
clrscr();
randomize();
int a[9];
double i,max=-987654321,min=987654321,sum=0;
int n;
cout<<"n ===> ";
cin>>n;
for(i=1;i<9;i++)
{
//cout<<"please enter a number : ";
a[i]=rand()%n;
sum+=a[i];
cout<<"array "<<i<<" = "<<a[i]<<"\n";
if (max<a[i]) max=a[i];
if (min>a[i]) min=a[i];
}
cout<<"max = "<<max<<"  <<  min = "<<min<<"  <<  sum = "<<sum;
getch();
}