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
		void fun1(int no1,int no2)
		{
			cout<<"In derived fun1"<<endl;
		}
		void fun3(int no)
		{
			cout<<"In derived fun 3"<<endl;
		}
};
		

int main(void)
{
	base bobj;
	derived dobj;
	
	bobj.fun1(10);
//	bobj.fun1(10,20);
	bobj.fun2(30);
//	bobj.fun3(10);
	
//	dobj.fun1(40);
	dobj.fun1(50,60);
	dobj.fun2(70);
	dobj.fun3(80);
	
	return 0;
}
/*
In base fun 1
In base fun 2
In derived fun1
In base fun 2
In derived fun 3
*/
