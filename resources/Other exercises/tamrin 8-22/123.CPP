#include<iostream.h>
#include<dos.h>
#include<conio.h>

main()
{
clrscr();
int a[6];
long i,x,min,max;
int temp;
min=32768;
max=-32767;
for(i=0;i<7;i++)
{
cout<<"please enter dama "<<i<<" = ";
cin>>x;
a[i]=x;
}
for(i=0;i<7;i++)
if(a[i]>max) max=a[i];
//if(a[i]<min) min=a[i];
for(i=0;i<7;i++)
{
if(a[i]<min) min=a[i];
}
/*for(i=0;i<=5;i++)
{
for(int j=i+1;j<=6;j++)
if(a[i] > a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
cout<<a[i]<<"\n";
}
}*/
/*for(i=0;i<7;i++)
{
cout<<a[i]<<"\n";
}*/
//cout<<"max = "<<a[0];
//cout<<"  min = "<<a[6];
cout<<"Max = "<<max<<"           Min = "<<min;
getch();
}