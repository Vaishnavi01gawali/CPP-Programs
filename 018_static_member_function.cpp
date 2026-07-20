#include<iostream>
using std::cout;
using std::endl;

class demo
{
	static int no1;
	int no2;
	
	public:
		void fun1()
		{
			cout<<"In fun1"<<endl;
			no1=10;
			no2=20;
			fun3();
			fun4();
		}
		void fun2()
		{
			cout<<"In fun2"<<endl;
			this->no1=10;
			this->no2=20;
			this->fun3();
			this->fun4();
		}
		void fun3()
		{
		    cout<<"In fun3"<<endl;
		}
		static void fun4()
		{
			cout<<"In static fun4"<<endl;	
		}
		static void fun5()
		{
			cout<<"In static fun5"<<endl;	
			no1=10;
		//	no2=20;       error as non static
		//	fun3();       error as non static
			fun4();
		}
		static void fun6()
		{
			cout<<"In static fun6"<<endl;	
		//	this->no1=10;        no this
		//	this->no2=20;        no this
		//	this->fun3();        no this
		//	this->fun4();        no this
			
		}
};
int demo::no1=10;
int main(void)
{
	demo dobj;
	dobj.fun1();
	dobj.fun2();
	dobj.fun3();
	dobj.fun4();
	dobj.fun5();
	dobj.fun6();
	
	return 0;
	
}
/*
In fun1
In fun3
In static fun4
In fun2
In fun3
In static fun4
In fun3
In static fun4
In static fun5
In static fun4
In static fun6
*/
