#include<iostream>
using namespace std;
#include<exception>
using std:: set_unexpected;

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

void my_unexpected()
{
	cout<<"In my_unexpected"<<endl;
	exit(0);
}

int main(void)
{
	set_unexpected(my_unexpected);
	try
	{
		fun(69.33f);
	}
	catch(...)
	{
		cout<<"Exception found"<<endl;
	}
	
	return 0;
}

/*
size of param = 4
In my_unexpected
*/
