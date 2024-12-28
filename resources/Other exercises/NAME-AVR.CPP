#include<stdio.h>
#include<iostream.h>
#include<string.h>
#include<conio.h>


void star()
{
   for(int i=0;i<40;i++)
      cout<<"-";
   cout<<"\n";
}



main()
{
   clrscr();
   char name[5][300];
   float grade[100];
   int k,i=0,j=0;
   float max=-1;
   float min=21;
   char goodstudent[100],badstudent[100];
   for(k=0;k<5;k++)
   {
      cout<<"please enter a name : ";
      gets(name[k]);
      name[i][strlen(name[k])]=0;
      cout<<"please enter a grade : ";
      cin>>grade[k];
      if(grade[k]>max)
      {
	 max=grade[k];
	 strcpy(goodstudent,name[k]);
      }
      if(grade[k]<min)
      {
	 min=grade[k];
	 strcpy(badstudent,name[k]);
      }
      i++;
   }
   star();
   for(k=0;k<i;k++)
      cout<<name[k]<<"  =  "<<grade[k]<<endl;
   star();
   cout<<"Max grade = "<<max<<" from "<<goodstudent<<" and Min = "<<min<<" from "<<badstudent;
   getch();
}