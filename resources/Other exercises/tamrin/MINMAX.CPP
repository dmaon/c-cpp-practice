#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int i,x,max,min;
max=0;
min=0;
for(i=1;i<=10;i++){
cout<<"adad "<<i<<" ra vared konid = ";
cin>>x;
if(x>max) max=x;
if(x<min) min=x;
}
cout<<"max = "<<max;
cout<<"      min = "<<min;
getch();
}