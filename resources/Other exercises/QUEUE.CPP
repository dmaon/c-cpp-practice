#include <iostream.h>
#include <conio.h>
#define size 100

struct queue{
   int rear;
   int front;
   int list[size];
};

void addq(queue *q,int x,int *overflow)
{
   if(q->rear==size-1)
   *overflow =1;
   else{
      *overflow =0;
      q->rear++;
      q->list[q->rear]=x;
   }
}

void delq(queue *q,int *x,int *underflow)
{
   if(q->rear < q->front)
      *underflow=1;
   else{
      *underflow =0;
      *x=q->list[0];
      for(int i=0;i<=q->rear;i++)
      q->list[i]=q->list[i+1];
      q->rear--;
   }
}

void retriveq(queue *q,int x,int *underflow)
{
  /* if(q->rear < q->front)
      *underflow=1;
   else{     */

      cout << q->list[0];

   //}
}


main()
{
   clrscr();
   char ch;
   queue q;
   q.rear=-1;
   q.front=0;
   int x,underflow,overflow;
   //textcolor(GREEN+BLINK);
   do{
      clrscr();
      cout<<"1) Add to queue \n";
      cout<<"2) Show to queue \n";
      cout<<"3) Del at queue \n";
      cout<<"4) Retrive at queue \n";
      ch=getch();
      switch(ch)
      {
	 case '1':
	 {
	 clrscr();
	 if(overflow==1) cout<<"Error!overflow..13";
	 cout<<"Please enter x : ";
	 cin>>x;
	 addq(&q,x,&overflow);
	 clrscr();
	 cout<<"Queue : \n";
	 for(int i=q.front;i<=q.rear;i++)
	    cout<<q.list[i]<<",";
	 break;
	 }

	 case '2':
	 {
	 clrscr();
	 /*if(underflow==1 || overflow==1) cout<<"Error!overflow or underflow..13";
	 if(underflow==0 && overflow==)
	 {*/
	 if(underflow==1) cout<<"error";
	 else{
	    cout<<"Queue : \n";
	    for(int k=q.front;k<=q.rear;k++)
	       cout<<q.list[k]<<",";
	    getch();
	 }
	 break;
	 }
	 case '3':
	 {
	 clrscr();
	 if(underflow==1)
	 {
	 cout<<"Error!underflow..13";
	 getch();
	 }
	 delq(&q,&x,&underflow);
	 break;
	 }
	 case '4':
	 {
	 clrscr();
	 retriveq(&q,x,&underflow);
	 getch();
	 break;
	 }
      }
   }while(ch!=27);

   //delq(&q,&x,&unerflow);
   //if(underflow==1) cout<<"Underflow";
}