#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>

#define  max 7

struct stack
{
   int item[max];
   int top;
};

void push(stack *s,int x)
{
   clrscr();
   if(s->top==max-1) cout<<"Poshte por shode ast. \n----------------------------------------\n";
   else
   {
      s->top++;
      s->item[s->top]=x;
	}
}

void pop(stack *s,int *x)
{
	if(s->top==-1) cout<<"Poshte khali ast. \n----------------------------------------\n";
	else
	{

		*x=s->item[s->top];
		s->item[s->top--]=0;
	}

}

void retrive(stack *s,int *x)
{
	if(s->top==-1)
		cout<<"Poshte khali ast. \n----------------------------------------\n";
	else
	//*x=s->item[s->top];
	cout<<"m= "<<*x<<"\n----------------------------------------\n";
}


main()
{
	stack s;
	s.top=-1;
	for(int j=0;j<max;j++){s.item[j]=0;}
	int x;
	char ch;
	clrscr();
	do{

		cout<<"1)Add to stack\n2)Remove of stack\n3)Retrive of stack\n4)Show stack\n5)Empty stack\n6)Exit";
		sound(500);
		delay(100);
		nosound();
		ch=getch();
		switch(ch)
		{
		case '1':clrscr();
		cout<<"Please enter a number for add to stack : ";
		cin>>x;
		push(&s,x);
		break;
		case'2':clrscr();
		pop(&s,&x);
		break;
		case'3':clrscr();
		retrive(&s,&x);
      //cout<<s.item[];
      break;
      case'4':clrscr();
      for(int i=0;i<max;i++)
	 cout<<s.item[i]<<"\n";
      cout<<"----------------------------------------\n";
      break;
      case'5':clrscr();
      s.top=max-1;
      for(int k=0;k<max;k++)
	 pop(&s,&x);
      //cout<<"----------------------------------------\n";
      break;
      case'6':exit(0);
      default:exit(0);
      }
   }while(ch!=27);
   getch();
}