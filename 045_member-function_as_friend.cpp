#include<iostream>
using std::cout;
using std::cin;
using std::endl;

class demo2
{
	public:
		void fun1();
		void fun2();
};

class demo1
{
	int pri;
	public:
		int pub;
	protected:
		int pro;
		
	friend void demo2::fun1(); 	
};

void demo2 ::fun1()
{
	demo1 obj1;
	cout<<"In fun1"<<endl;
	obj1.pri = 10;
	cout<<"pri:"<<obj1.pri<<endl;
	obj1.pub=20;
	cout<<"pub:"<<obj1.pub<<endl;
	obj1.pro=30;
	cout<<"pro:"<<obj1.pri<<endl;
}
void demo2 :: fun2()
{
	demo1 obj1;
	cout<<"\nIn fun2"<<endl;
	//obj1.pri = 40;
//	cout<<"pri:"<<obj1.pri<<endl;
	obj1.pub = 50;
	cout<<"pub:"<<obj1.pub<<endl;
//	obj1.pro = 60;
//    cout<<"pro:"<<obj1.pr0<<endl;
	
}

int main(void)
{
	demo2 obj;
	obj.fun1();
	obj.fun2();
	
	return 0;
}

/*
In fun1
pri:10
pub:20
pro:10

In fun2
pub:50
*/
