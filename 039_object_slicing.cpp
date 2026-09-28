#include<iostream>
using std :: cout;
using std :: endl; 


class base 
{
	public:
		int iNo1;
		int iNo2;
		
		void fun1()
		{
			cout<<" In base fun1"<<endl;
		}
};

class derived : public base 
{
	public :
		int iNo3;
		int iNo4;
		
		void fun2()
		{
			cout<<"In derived Fun 2"<<endl;
		}
};


void display(base bobj)
{
	cout<<bobj.iNo1"\t"<<bobj.iNo2<<endl;
//	cout<<bobj.iNo3 <<bobj.iNo3 <<endl;   Error: class base has no member named iNo3
	
	bobj.fun1();
//	bobj.fun2();   Error:class base has no member named 'fun2''
}

int main(void)
{
	derived dobj;
	
	dobj.iNo1 =10;
	dobj.iNo2=30;
	dobj.iNo3=20;
	dobj.iNo4=20;
	display(dobj);
	
	return 0;
}
