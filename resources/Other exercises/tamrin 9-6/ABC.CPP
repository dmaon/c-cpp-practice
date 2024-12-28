     # include <iostream.h>
     # include <conio.h>
     # include <stdio.h>
      // array project ......
      main()
      {
     // clrscr();
      char str [100]="100;ali;alavi;17.5";
      char list[10][30];
      int k,i,j;
      clrscr();
      i=0;
      j=0;
       for (k=0;str[k] != 0;k++)
      {
	if (str[k]==';')
	{
	list[i][j]=0;
	i++;
	j=0;
	  }
      else
      {
      list[i][j]=str[k];
      j++;
      }
      }
      for(k=0;k<=i;k++)
      cout<<list[k]<<endl;
      /*
      char s='100;ali;alavi;17.5'
      for (int i=0;i<;i++)
      {
       for (int j=0;j!=';' ;j++)
       {
       a[i][j]=s

      for (int j=0;j<1;j++)
      {
      if (ch[i]==';')
      {
      cout << "\n";
      a[i][j]=ch[i];

      cout <<a[i][j];
      }
      }
      }
       */
	getch();
      }