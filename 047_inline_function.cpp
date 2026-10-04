#include<iostream>
using std::cout;
using std::endl;

class demo
{
	public:
		void fun1();
		void fun2();
		
		void fun3()
		{
			cout<<"In fun3"<<endl;;
		}
		inline void fun4()
		{
			cout<<"In inline fun4"<<endl;
		}
};

void demo::fun1()
{
	cout<<"In fun1"<<endl;
}
inline void demo::fun2()
{
	cout<<"In inline fun2"<<endl;
}
void fun5()
{
	cout<<"In fun5"<<endl;
}
inline void fun6()
{
	cout<<"In inline fun6"<<endl;
}

int main(void)
{
	demo obj;
	obj.fun1();
	obj.fun2();
	obj.fun3();
	obj.fun4();
	fun5();
	fun6();
	
	return 0;
}

/*
In fun1
In inline fun2
In fun3
In inline fun4
In fun5
In inline fun6
*/
