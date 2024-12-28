#include<iostream.h>
#include<conio.h>
#include<stdio.h>
main()
{
clrscr();
float x;
float i;
float g,sum;
cout<<"Please enter x= ";
cin>>x;
for(i=1;i<=100;i++)
{
g=x/i;
sum=sum+g;
printf(" %f ",g);
}
printf("\n %f ",sum);
getch();
}