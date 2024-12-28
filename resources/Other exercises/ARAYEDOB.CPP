#include "iostream.h"
#include "conio.h"
#include "stdio.h"
main()
{
clrscr();
int a[3][2],b[3][2],sum[3][2];
printf("\n");
cout<<"========== araye avai =======";
printf("\n");
for(int i=0;i<3;i++)
 for(int j=0;j<2;j++)
 {
 cout<<i<<","<<j<<": ";
 cin>>a[i][j];
 }
 //=========araye dovomi
cout<<"======== araye dovomi ==========";
printf("\n");
for(i=0;i<3;i++)
 for(j=0;j<2;j++)
 {
 cout<<i<<","<<i<<": ";
 cin>>b[i][j];
 }
//==========jame===================
for(i=0;i<3;i++)
 for(j=0;j<2;j++)
sum[i][j]=a[i][j]+b[i][j];
//=========================== chap   =========
cout<<"============= jame do araye : =======";
printf("\n");
for(i=0;i<3;i++)
 for(j=0;j<2;j++)
 {
 cout<<i<<","<<j<<" :";
 cout<<sum[i][j];
 printf("\n");
 }
getch();
}