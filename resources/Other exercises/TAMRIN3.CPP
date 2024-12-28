#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
long float i,fn,n,fk,k,nk,fnk,c;
cout<<"please enter n = ";
cin>>n;
cout<<"please enter k = ";
cin>>k;
nk=n-k;
fn=1;
fk=1;
fnk=1;
for(i=1;i<=n;i++){
fn*=i;
}
cout<<n<<"! =  "<<fn<<"           ";

for(i=1;i<=k;i++){
fk*=i;
}
cout<<k<<"! = "<<fk;

for(i=1;i<=nk;i++){
fnk*=i;
}
cout<<"   "<<"n-k! = "<<fnk;
c=(fn)/(fk*fnk);
cout<<"           "<<c;
getch();
}