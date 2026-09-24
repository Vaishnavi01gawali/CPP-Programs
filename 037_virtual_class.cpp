#include<iostream>
using std:: cout;
using std:: cin;

class base
{
	int no1;
	public:
		void fun1()
		{
			cout<<"In Base Fun1"<<endl;
		}
		virtual void fun2()
		{
			cout<<" In Base Fun2"<<endl;
		}
		virtual void fun3()=0;
		{
			cout<<"In Base fun3"<<endl;
		}
		virtual void fun4()=0;
		{
			cout<<"In Base fun4 "<<end;
		}	
};


class derived1: public base
{
	int no2;
	public:
		void fun3()
		{
			cout<<"In derived 1 fun 3"<<endl;
		}
		virtual void fun5()
		{
			cout<<"In derived 1 fun 5"<<endl;
		} 
};

class derived2 : public derived1
{
	
   	
};
