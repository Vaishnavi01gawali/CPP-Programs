#include<iostream>
using namespace std;

void fun1(int);
void fun2(int);
void fun3(int);

void fun1(int no)
{
	cout<<"In fun1"<<endl;
	if(no == 10)
	   throw no;
	fun2(no);
	cout<<"Leaving fun1"<<endl;   
}

void fun2(int no)
{
	cout<<"In fun2"<<endl;
	if(no==20)
	   throw no;
	fun3(no);
	cout<<"Leaving fun2"<<endl;  
}

void fun3(int no)
{
	cout<<"In fun3"<<endl;
	if(no==3)
	   throw no;
	   
	cout<<"Leaving fun3"<<endl;   
}

int main(void)
{
	int ret;
	cout<<"In main"<<endl;
	
	try
	{
		fun1(30);
	}
	catch(...)
	{
		cout<<"Exception found"<<endl;
		exit(0);
	}
	cout<<"Exception not found"<<endl;
	
	cout<<"Leaving main"<<endl;
	
	return 0;
}

/*
In main
In fun1
In fun2
In fun3
Leaving fun3
Leaving fun2
Leaving fun1
Exception not found
Leaving main
*/
