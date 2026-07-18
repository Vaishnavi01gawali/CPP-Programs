#include<iostream>
using std::cout;
using std::endl;

class demo
{
   static int no1;
   int no2;
   
   public:
   demo()
   {
   	  cout<<"In Constructor "<<endl;
   	  no2=20;
	}	
	void display()
	{
		cout<<no1<<endl;
		cout<<no2<<endl;
	}
};
int demo::no1=10;

int main(void)
{
	demo obj;
	
	cout<<sizeof(obj)<<"\t"<<sizeof(demo)<<"\t"<<endl;
	//scout<<obj.no1<<"\t"<<obj.no2<<endl;
	//cout<<demo::no1<<"\t"<<demo::no2<<endl;
	
	obj.display();
	
	return 0;
}
/*
In Constructor 
4       4
10
20
*/
