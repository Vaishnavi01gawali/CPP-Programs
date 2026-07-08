#include<iostream>
using namespace std;

class base
{
	int bpri;
	protected:
		int bpro;
	public:
	     int bpub;
		 	
	void fun()
	{
		bpri=10;
		bpro=20;
		bpub=30;
	}
};
class derived:public base
{
	int dpri;
	protected:
		int dpro;
	public:
	     int dpub;
		 	
	void fun()
	{
	//	bpri=10;
		bpro=20;
		bpub=30;
		dpri=40;
		dpro=50;
		dpub=60;
	}
};

int main(void)
{
	base bobj;
	derived dobj;
	
	//bobj.bpri=10;
//	bobj.bpro=20;
	bobj.bpub=30;
//	bobj.dpub=40;
	
//	dobj.bpri=10;
//	dobj.bpro=20;
	dobj.bpub=30;
//	dobj.dpri=40;
//	dobj.dpro=50;
	dobj.dpub=60;
	
	bobj.fun();
	dobj.fun();
	
	return 0;
}
