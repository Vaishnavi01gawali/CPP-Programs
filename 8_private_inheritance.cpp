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
		cout<<"In base fun"<<endl;
		bpri=10;
		bpro=20;
		bpub=30;
	}
};
class derived:private base
{
	int dpri;
	protected:
		int dpro;
	public:
	     int dpub;
		 	
	void fun()
	{
		cout<<"In derived fun";
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
	
//	bobj.bpri=10;
//	bobj.bpro=20;
	bobj.bpub=30;
	
//	dobj.bpri=10;
//	dobj.bpro=20;
//	dobj.bpub=30;
//	dobj.dpri=40;
//	dobj.dpro=50;
	dobj.dpub=60;
	
	bobj.fun();      //In base fun
	dobj.fun();      //In derived fun
	
	return 0;
}
