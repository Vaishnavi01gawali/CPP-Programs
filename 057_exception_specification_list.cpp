#include<iostream>
using namespace std;

template <typename T>
void fun(T param) throw (char,int)
{
	cout<<"size of param = "<<sizeof(T)<<endl;
	if(sizeof(T)==4)
	   throw param;
	else if(sizeof(T)==1)
	   throw param;
	else
	   cout<<"Exception not found"<<endl;      
}

int main(void)
{
	try
	{
		fun(10);
	}
	catch(...)
	{
		cout<<"Exception found"<<endl;
	}
	
	return 0;
}

/*
size of param = 4
Exception found
*/
