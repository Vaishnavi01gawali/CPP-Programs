#include<iostream>
using std::cout;
using std::cin;
using std::endl;

class demo
{
	int pri;
	
	protected:
		int pro;
		
	public:
	    int pub;
		
	friend void fun1();		
};

void fun1()
{
	cout<<"In fun1 "<<endl;
}

int main(void)
{
	demo obj;
//	obj.pri;        Error: as private
//	obj.pro;        Error: as protected
	obj.pub;
	fun1();
	
	return 0;
}

// In fun1
