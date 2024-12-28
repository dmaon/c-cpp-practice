#include<iostream.h>
#include<conio.h>
main(){
clrscr();
int i,x,sum=0,r;

for(i=1;i<=10;i++){
cout<<"adad "<<i<<" ra vared konid = ";
cin>>x;
if(x%2==0) sum++;
}
cout<<"zoj = "<<sum;
cout<<"       fard = "<<10-sum;
getch();
}