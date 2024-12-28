#include<iostream.h>

class date
{
	private:
	int year;
	int month;
	int day;

	public:
	void rdate();
	void printyear();
	void printmonth();
	void printday();
	void dayweek();

	date(){
	year=1391;
	month=9;
	day=27;
	}

};


void date::rdate()
{
	int y,m,d;
	cout<<"please enter a year : ";
	cin>>y;
	year=y;
	cout<<"please enter a month : ";
	cin>>m;
	month=m;
	cout<<"please enter a day : ";
	cin>>d;
	day=d;
}



void date::printyear()
{
	cout<<year;
}

void date::printmonth()
{
	switch(month)
	{
	case 1:cout<<"�������";break;
	case 2:cout<<"��������";break;
	case 3:cout<<"�����";break;
	case 4:cout<<"���";break;
	case 5:cout<<"�����";break;
	case 6:cout<<"�������";break;
	case 7:cout<<"���";break;
	case 8:cout<<"����";break;
	case 9:cout<<"���";break;
	case 10:cout<<"��";break;
	case 11:cout<<"����";break;
	case 12:cout<<"�����";break;
	}
}

void date::printday()
{
	cout<<day;
}

void date::dayweek()
{
	int k;
	if(month<=6)
	k=(month-1)*31+day;
	else
	k=(month-7)*30+186+day;
	int v=k%7;
	switch(v)
	{
	case 0:cout<<"������";break;
	case 1:cout<<"�� ����";break;
	case 2:cout<<"��������";break;
	case 3:cout<<"��� ����";break;
	case 4:cout<<"����";break;
	case 5:cout<<"����";break;
	case 6:cout<<"� ����";break;
	}
}


main()
{
	date t1;
	t1.rdate();
	t1.printyear();
	t1.printmonth();
	t1.printday();
	t1.dayweek();
}
