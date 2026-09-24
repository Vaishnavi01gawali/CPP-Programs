#include<iostream>
using std :: cout;
using std :: endl;


class base
{
	public:
		virtual void fun() =0;
};

void  base :: fun()
{
	cout<<"In base"<<endl;
}

class derived : public base
{
	public:
		void fun()
		{
			base :: fun();
			cout<<"In derived fun";
		}
};

int main(void)
{
//	base bobj;       'void base::fun(void)' : is abstract 
	
	derived dobj;
	base *bp = &dobj;
	bp -> fun();
	
	return 0;
}
