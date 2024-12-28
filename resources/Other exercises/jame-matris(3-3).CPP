#include<iostream.h>
#include<conio.h>
main()
{
   clrscr();
   //float grade[9];
   float a[3][3],b[3][3],c[3][3];
   int i,j;
   float sum=0,suma=0,sumb=0,sumc=0,sumbas=0,sumcas=0;
   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
      {
	  cout<<"enter grade  a "<<i<<","<<j<<" : ";
	  cin>>a[i][j];
	  sum+=a[i][j];
	  //cin>>ch[i][j];
      }
   }
   //---------------------------------------------------
   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
      {
	 cout<<a[i][j]<<"\t";
      }
   cout<<"\n";
   }
   cout<<"sum  a = "<<sum<<"\t";
    //---------------------------------------------------
   for(i=0;i<3;i++)
   {
      suma+=a[i][i];
   }
   cout<<"sum gotr asli a = "<<suma;
   cout<<"\n------------------------------------------ \n";
      for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
      {
	  cout<<"enter grade b "<<i<<","<<j<<" : ";
	  cin>>b[i][j];
	  sumb+=b[i][j];
	  //cin>>ch[i][j];
      }
   }
   //---------------------------------------------------
   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
      {
	 cout<<b[i][j]<<"\t";
      }
   cout<<"\n";
   }
   cout<<"sum b = "<<sumb<<"\t";
    //---------------------------------------------------
   for(i=0;i<3;i++)
   {
      sumbas+=b[i][i];
   }
   cout<<"sum gotr asli b = "<<sumbas;
   cout<<"\n---------------------------------------- \n";
      for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
      {
	  c[i][j]=a[i][j]+b[i][j];
	  sumc+=c[i][j];
	  //cin>>ch[i][j];
      }
   }
   //---------------------------------------------------
   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
      {
	 cout<<c[i][j]<<"\t";
      }
   cout<<"\n";
   }
   cout<<"sum c = "<<sumc<<"\t";
    //---------------------------------------------------
   for(i=0;i<3;i++)
   {
      sumcas+=c[i][i];
   }
   cout<<"sum gotr asli c = "<<sumcas;
   getch();

}