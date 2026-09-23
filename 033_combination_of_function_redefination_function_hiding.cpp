#include<iostream>
using std::cout;
using std::endl;

class base
{
	public:
		void fun1(int no)
		{
			cout<<"In base fun1 1"<<endl;
		}
		void fun1(int no1,int no2)
		{
			cout<<"In base fun1 2"<<endl;
		}
		void fun2(int no)
		{
			cout<<"In base fun2 1"<<endl;
		}
		void fun2(int no1,int no2)
		{
			cout<<"In base fun2 2"<<endl;
		}
		void fun3(int no)
		{
			cout<<"In base fun3 "<<endl;
		}
};

class derived:public base
{
	public:
	void fun1(int no)
	{
		cout<<"In derived fun1 "<<endl;
	}
	void fun2(int no1,int no2,int no3)
	{
		cout<<"In derived fun2 "<<endl;
	}
	void fun4(int no)
	{
		cout<<"In derived fun4 "<<endl;
	}
};

int main(void)
{
	derived dobj;
	
	dobj.fun1(10);
	//dobj.fun1(10,20);    Error: Hidding
	//dobj.fun2(30);       Error: Hidding
//	dobj.fun2(30,40);      Error: Hidding
	dobj.fun2(30,40,50);
	dobj.fun3(60);
	dobj.fun4(70);
	
	return 0;
}

/*
In derived fun1
In derived fun2
In base fun3
In derived fun4
*/
