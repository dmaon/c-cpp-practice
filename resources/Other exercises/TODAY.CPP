
#include <dos.h>
#include <stdio.h>
#include<conio.h>

int main()
{
   struct date d;
	   clrscr();
   getdate(&d);
   int  year=d.da_year-621;
   int  day=d.da_day+9;
   int  mon=d.da_mon-3;
   printf("Today : %d/%d/%d", d.da_year, d.da_day, d.da_mon);
   printf("\n");
   printf("Today : %d/%d/%d", year,mon,day);
   getch();
   return 0;

}

