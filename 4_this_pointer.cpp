#include<iostream>
using namespace std;

#include<iomanip>
using std::setw;

class demo
{
	int no1;
	int no2;
	public:
		void fun1()
		{
			no1=10;
			no2=20;
		}
		void fun2()
		{
			this->no1=30;
			this->no2=40;
		}
		void fun3()
		{
			(*this).no1=50;
			(*this).no2=60;
		}
		demo fun4()
		{
			return *this;      //returning caller object by value
		}
		demo*fun5()
		{
			no1=70;
			no2=80;
			return this;       //returning caller object by address
		}
		void display()
		{
			cout<<no1<<setw(10)<<no2<<endl;
		}
};

int main(void)
{
	demo obj1;
	
	obj1.fun1();
	obj1.fun2();
	obj1.fun3();
	
	demo obj2=obj1.fun4();       //copy constructor
	
	demo*p=obj1.fun5();          //70        80
	cout<<&obj1<<endl;
	cout<<p<<endl;
	obj1.display();
	p->display();
	
	return 0;
	
}

