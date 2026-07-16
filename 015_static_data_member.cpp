#include<iostream>
using std::cout;
using std::endl;

class demo
{
	public:
		static int no1;
		int no2;
		
		demo()
		{
			no2=20;
		}
};
int demo::no1=10;

int main(void)
{
	demo obj1;
	demo obj2;
	
	cout<<sizeof(demo)<<"\t"<<sizeof(obj1)<<"\t"<<sizeof(obj2)<<endl;
	
	cout<<"Before changing value:"<<endl;
	cout<<obj1.no1<<"\t"<<obj1.no2<<"\t"<<endl;
	cout<<obj2.no1<<"\t"<<obj2.no2<<"\t"<<endl;
	cout<<demo::no1<<endl;
//	cout<<demo::no2;
	
	obj1.no1++;
	obj1.no2++;
	
	cout<<"After changing value:"<<endl;
	cout<<obj1.no1<<"\t"<<obj1.no2<<"\t"<<endl;
	cout<<obj2.no1<<"\t"<<obj2.no2<<"\t"<<endl;
	cout<<demo::no1;
	
	return 0;
	
}
/*
4       4       4
Before changing value:
10      20
10      20
10
After changing value:
11      21
11      20
11
*/
