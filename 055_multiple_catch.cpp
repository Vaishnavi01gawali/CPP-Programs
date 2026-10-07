#include<iostream>
using std:: cout;
using std::cin;
using std::endl;

template <typename T>

void fun(T param)
{
	cout<<"size of param = "<<sizeof(T)<<endl;
	if(sizeof(T)==4)
	   throw param;
	else if(sizeof(T) ==1)
	   throw param;
	else
	   cout<<"Exception not found "<<endl;      
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
	catch(float excetion)
	{
		cout<<"Float exception found"<<endl;
	}
	catch(char exception)
	{
		cout<<"Char exception found"<<endl;
	}
	
	return 0;
}

/*
size of param = 1
Char exception found
*/
