#include<iostream>
using std::cout;
using std::endl;

class base
{
	public:
		static int no1;
		int no2;
		
		base()
		{  
		    cout<<"In base"<<endl;	
			no2=20;
		}
};
int base::no1=10;
class derived:public base
{
	public:
		derived()
		{
		   cout<<"In derived"<<endl;	
		}
};
int main(void)
{
	base bobj; 
	derived dobj;
	
	cout<<sizeof(base)<<"\t"<<sizeof(derived)<<endl;
	cout<<sizeof(bobj)<<"\t"<<sizeof(dobj)<<"\t"<<endl;
	
	cout<<"before changing value"<<endl;
	cout<<bobj.no1<<"\t"<<bobj.no2<<"\t"<<endl;
	cout<<dobj.no1<<"\t"<<dobj.no2<<"\t"<<endl;
	cout<<base::no1<<"\t"<<derived::no1<<"\t"<<endl;
//	cout<<base::no2<<derived::no2<<endl;
	
	bobj.no1++;
	bobj.no2++;
	
	cout<<"after changing value"<<endl;
	cout<<bobj.no1<<"\t"<<bobj.no2<<"\t"<<endl;
	cout<<dobj.no1<<"\t"<<dobj.no2<<"\t"<<endl;
	cout<<base::no1<<"\t"<<derived::no1<<"\t"<<endl;
	
	return 0;
	
}
/*
In base
In base
In derived
4       4
4       4
before changing value
10      20
10      20
10      10
after changing value
11      21
11      20
11      11
*/
