#include<iostream>
using namespace std;

class demo
{ 
   const int no1;
   int no2;
   
   public:
   	demo():no1(10),no2(20)
   	{
	    cout<<"In constructor"<<endl;    //In constructor
	}
	void fun1()
	{
		cout<<"In fun1"<<endl;          //In fun1
	//	no1=10;       Error:l-value specifies const object
		no2=20;
		cout<<"No2:"<<no2<<endl;        //No2:20
	}
	void fun2() const
	{
		cout<<"In fun2"<<endl;        //In fun2
	//	no1=10;       Error:'no1' cannot be modified because it is being accessed through a const object
	//	no2=20;       'no2' cannot be modified because it is being accessed through a const object
	}
	void fun3(demo*p)
	{
		cout<<"In fun3"<<endl;      //In fun3
	//	no1=10;          //l-value specifies const object
		no2=20;
		cout<<"No2:"<<no2<<endl;    // No2:20
	//	this->no1=30;    //l-value specifies const object
		this->no2=40;               
		cout<<"No2:"<<this->no2<<endl;  // No2:40
	//	p->no1=50;       //l-value specifies const object
		p->no2=60;                   
		cout<<"No2:"<<p->no2<<endl;     // No2:60
	}
	     
};

int main(void)
{
	demo obj;
	obj.fun1();
	obj.fun2();
	obj.fun3(&obj);
	
	return 0;
}
