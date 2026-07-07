#include<iostream>
using namespace std;

class base
{
	int pri;
	public:
		int pub;
	protected:
	    int pro;
	public:	
	    void fun()
		{
		    pri=10;
			pub=20;
			pro=30;	
		}	
};

class derived:base
{
	public:
		void fun()
		{
		//	pri=10;
			pub=20;
			pro=30;
		}
};
int main(void)
{
	base bobj;
	derived dobj;
	
	bobj.fun();
	dobj.fun();
	
//	bobj.pri=10;
//	bobj.pro=20;
	bobj.pub=30;
	
	return 0;
}
