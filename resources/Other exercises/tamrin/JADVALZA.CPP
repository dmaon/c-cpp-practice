#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
int i,j,a;
for(i=1;i<=10;i++){
for(j=1;j<=10;j++){
a=i*j;
printf("%d \t",a);
}
printf("\n");
}
getch();
}