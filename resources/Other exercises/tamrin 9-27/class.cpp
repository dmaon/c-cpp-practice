#include<iostream.h>
#include<conio.h>

class time
{
	private:
	int hour;
	int minute;
	int second;

	public:
	void gettime();
	void printtime();
	/*~time(){
	cout<<"good by";
	} */
};

void time::gettime()
{
	int a,b,c;
	cout<<"please enter hour : ";
	cin>>a;
	hour=a;
	cout<<"please enter minute : ";
	cin>>b;
	minute=b;
	cout<<"please enter second : ";
	cin>>c;
	second=c;
}

void time::printtime()
{
cout<<"--------------------------------------------"<<"\n";
cout<<"time : "<<hour<<":"<<minute<<":"<<second;
}

main()
{
	time t1;
	t1.gettime();
	t1.printtime();

}