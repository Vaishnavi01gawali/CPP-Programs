 #include<iostream>
using std::cout;
using std::endl;

class demo
{
	int no1;
	int no2;
	
	public:
		demo()
		{
			cout<<" default constructor"<<endl;
		}
		void fun1()
		{
			cout<<"In fun1"<<endl;
			no1=10;
			no2=20;
		}
		void fun2()const
		{
			cout<<"In fun2"<<endl;
			//no1=10;
			//no2=20;
		}
};
int main(void)
{
	demo obj1;
	const demo obj2;
	
	obj1.fun1();
	obj1.fun2();
	
//	obj2.fun1();
	obj2.fun2();
	
	return 0;
}
