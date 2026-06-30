#include<iostream>
using std::cout;
using std::endl;

class base
{
	void fun1()
	{
		cout<<"In base private fun1"<<endl;
	}
	public:
		void fun2()
    	{
			cout<<"In base public fun2"<<endl;
		}
		void fun3()
		{
			cout<<"In base public fun3 1"<<endl;        //In base public fun3 1
		}
		void fun3(int)
		{
			cout<<"In base public fun3  2"<<endl;       //In base public fun3  2
		}
	protected:
	    void fun4()
		{
			cout<<"In base protected fun4"<<endl;
		}
		 void fun5()
		{
			cout<<"In base protected fun5"<<endl;      //In base protected fun5
		}
					
};
class derived :private base
{
	public:
	//	using base::fun1;
		base::fun3;
		using base::fun5;
};
int main(void)
{
	derived dobj;
	
//	dobj.fun1();
//	dobj.fun2();
	dobj.fun3();
	dobj.fun3(40);
//	dobj.fun4();
	dobj.fun5();
	
	return 0;
}
