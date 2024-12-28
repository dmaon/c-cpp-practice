#include<iostream.h>
#include<conio.h>


long float  pow(float x,int i)
{
   float f=1,n;
   for(n=1;n<=i;n++)
   {
      f*=x;
   }
   return f;
}

long fact(int i)
{
   long f=1,n;
   for(n=1;n<=i;n++)
   {
      f*=n;
   }
   return f;
}



float func(int x,int i)
{
long float s,m;
s=pow(x,i);
m=fact(i);
return s/m;
}



main()
{
clrscr();
float fu,x,s=0;
int i;
int n;
cout<<"x ra vared konid = ";
cin>>x;
cout<<"i ra vared konid = ";
cin>>i;
cout<<x<<"^"<<i<<"="<<pow(x,i);
cout<<"\t"<<i<<"! = "<<fact(i);
cout<<"\t \t"<<pow(x,i)<<" / "<<fact(i)<<" = "<<func(x,i);
cout<<"\n";
//cout<<x<<"\t";
for(n=2;n<=10;n++)
{
//cout<<pow(x,n)<<"\t";
//cout<<fact(n)<<"\t";
fu=(pow(x,n))/(fact(n));
cout<<fu<<"\t";
s=s+fu;
}
cout<<"\n"<<"s = "<<s*x;
getch();
}