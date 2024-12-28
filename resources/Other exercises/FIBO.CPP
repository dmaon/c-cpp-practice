#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
long int a=1;
long int b=1;
long int i,c;
cout<<"1"<<" 1";
for(i=1;i<=18;i++){
c=a+b;
//s=s+c;
a=b;
b=c;
cout<<" "<<c;
}
getch();
}