#include<iostream.h>
#include<conio.h>
main()
{
int x,sum=0;
clrscr();
do{
cin>>x;
sum+=x;
}while(x!=0);
cout<<"sum = "<<sum;
getch();
}