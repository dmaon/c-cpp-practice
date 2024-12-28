#include<iostream.h>
#include<conio.h>

long  majmo(long n)
{
   int sum=0,r;
   if (n>10)
   {
   do{
	r=n%10;
	n=n/10;
	sum+=r;
   }while(n>0);
   return sum;
   }
   else
   {
   return 1;
   }
}


main()
{
clrscr();
long n;
cout<<"please enter a number : ";
cin>>n;
cout<<majmo(n);
getch();
}