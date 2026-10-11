#include<iostream>
#include<exception>
using namespace std;

template <typename T>
void fun(T param)
{
	cout<<"size of param ="<<sizeof(T)<<endl;
	if(sizeof(T)==4)
	   throw param;
	else if(sizeof(T) ==1)
	   throw param;
	else
	   cout<<"Exception not found"<<endl;      
}

void my_terminate()
{
	cout<<"In my_terminate"<<endl;
	exit(0);
}

int main(void)
{
	set_terminate(my_terminate);
	try
	{
		fun('A');
	}
	catch(int exception)
	{
		cout<<"Integer exception found"<<endl;
	}
	catch(float exception)
	{
		cout<<"float exception found"<<endl;
	}
	
	return 0;
}

/*
size of param =1
In my_terminate
*/
