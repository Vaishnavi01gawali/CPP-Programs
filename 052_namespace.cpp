#include<iostream>
using std::cout;
using std::endl;


   namespace one
	{
		int no1 =10;
		int no2 =20;
	}
	
	namespace two
	{
		int no1 = 30;
		int no2 = 40;
	}

int main(void)
{	
	using one:: no1;
	using two:: no2;
	
	cout<<no1<<endl;
	cout<<no2<<endl;
	cout<<one::no2<<endl;
	
	cout<<one::no1<<endl;
	cout<<one::no2<<endl;
	cout<<two::no1<<endl;
	cout<<two::no2<<endl;
	cout<<no1<<endl;
	
	return 0;
}
