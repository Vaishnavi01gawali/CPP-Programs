#include<iostream>
using std::cout;
using std::endl;

template<typename T>

void fun(T param)
{
	cout<<"size of param = "<<sizeof(T)<<endl;
	try
	{
		if(sizeof(T) == 4)
		   throw param;
		else if(sizeof(T)==1)
		   throw param;
		else 
		   throw param;   
	}
	catch(...)
	{
		cout<<"In generic catch, rethrowing"<<endl;
	}
}

int main(void)
{
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
	
	catch(char exception)
	{
		cout<<"char exception found"<<endl;
	}
	
	return 0;
}

/*
size of param = 1
In generic catch, rethrowing
*/
