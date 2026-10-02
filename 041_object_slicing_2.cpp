#include<iostream>
using std::cout;
using std::endl;

class base 
{
	public:
		int iNo1;
		int iNo2;
		
		void fun1()
		{
			cout<<"\nIn base fun1"<<endl;
		}
};

class derived :public base 
{
	public:
		int iNo1;
		int iNo2;
		
		void fun2()
		{
			cout<<"In derived fun 2"<<endl;
		}
};

void display(derived dobj)
{
	cout<<dobj.iNo1<<"\n"<<dobj.iNo2;
//	cout<<dobj.iNo3<<dobj.iNo3<endl;    Error: class base and derived has no member named iNo3
	
	dobj.fun1();
	dobj.fun2();     //class base has no member named fun2
}

int main(void)
{
	derived dobj;
	dobj.iNo1= dobj.iNo2=10;
	display(dobj);
	
	return 0;
}

/*
10
10
In base fun1

In derived fun 2
 */
