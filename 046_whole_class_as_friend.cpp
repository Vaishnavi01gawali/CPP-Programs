#include<iostream>
using std::cout;
using std::endl;

class demo2;

class demo1
{
	int pri;
	protected:
		int pro;
	public:
	    int pub;
		
	friend class demo2;		
};

class demo2
{
	public:
		void fun1();
		void fun2();
};
void demo2 ::fun1()
{
	demo1 obj1;
	cout<<"In Fun1"<<endl;
	
	obj1.pri = 10;
	cout<<"In Fun1 pri is:"<<obj1.pri<<endl;
	
	obj1.pub=20;
	cout<<"In Fun1 pub is:"<<obj1.pub<<endl;
	
	obj1.pro=30;
	cout<<"In Fun1 pro is:"<<obj1.pro<<endl;
}
void demo2 :: fun2()
{
	demo1 obj1;
	cout<<"\n\nIn Fun2"<<endl;
	
	obj1.pri = 40;
	cout<<"In Fun2 pri is:"<<obj1.pri<<endl;
	
	obj1.pub=50;
	cout<<"In Fun2 pub is:"<<obj1.pub<<endl;
	
	obj1.pro=60;
	cout<<"In Fun2 pro is:"<<obj1.pro<<endl;
}

int main(void)
{
	demo2 obj;
	
	obj.fun1();
	obj.fun2();
	
	return 0;
}

/*
In Fun1
In Fun1 pri is:10
In Fun1 pub is:20
In Fun1 pro is:30


In Fun2
In Fun2 pri is:40
In Fun2 pub is:50
In Fun2 pro is:60
*/
