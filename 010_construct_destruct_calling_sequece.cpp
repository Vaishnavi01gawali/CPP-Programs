#include<iostream>
using std::cout;

class base
{
	public:
		base()
		{
			cout<<"In base constructor\n";
		}
		~base()
		{
		   cout<<"In base destructor\n";	
		}
};
class derived:public base
{
	public:
		derived()
		{
			cout<<"In derived constructor\n";
		}
		~derived()
		{
		   cout<<"In derived destructor\n";	
		}	
};
int main(void)
{
	derived dobj;
	return 0;
}
/*
In base constructor
In derived constructor
In derived destructor
In base destructor
*/
