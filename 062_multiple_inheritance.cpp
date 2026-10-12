#include<iostream>
using std::cout;
using std::endl;

class base1
{
	protected:
		int no;
		int no1;
		
	public:
		base1()
		{
			no = 10;
			no1=100;
		}
		
};

class base2
{
	protected:
		int no;
		int no2;
		
	public:
		base2()
		{
			no = 20;
			no2 = 200;
		}
	 	
};

class derived : public base1, public base2
{
	public:
		void display()
		{
			cout<<base1::no<<endl;
			cout<<base2::no<<endl;
			cout<<no1<<endl;
			cout<<no2<<endl;
	    }
};

int main(void)
{
	derived dobj;
	
	cout<<"size of dobj ="<<sizeof(dobj)<<endl;
	dobj.display();
	
	return 0;
}

/*
size of dobj =16
10
20
100
200
*/
