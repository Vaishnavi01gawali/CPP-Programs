#include<iostream>
using std::cout;
using std::endl;

class base
{
	public:
		void fun1(int no)
		{
			cout<<"In base fun 1"<<endl;
		}
		void fun2(int no)
		{
			cout<<"In base fun 2"<<endl;
		}
		
};

class derived:public base
{
	public:
		void fun1(int no)
		{
			cout<<"In derived fun1"<<endl;
		}
		void fun3()
		{
			cout<<"In derived fun3"<<endl;
		}
};
int main(void)
{
	base bobj;
	derived dobj;
	
	bobj.fun1(10);
	bobj.fun2(20);
//	bobj.fun3();
	
	dobj.fun1(10);
	dobj.fun2(20);
	dobj.fun3();
	
	return 0;
}
/*
In base fun 1
In base fun 2
In derived fun1
In base fun 2
In derived fun3
*/
