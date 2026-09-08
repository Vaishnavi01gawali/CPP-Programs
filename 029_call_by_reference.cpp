#include<iostream>
using std::cout;
using std::endl;

void fun(int &);

int main(void)
{
	int no=10;
	
	cout<<no<<endl;
	cout<<&no<<endl;
	
	fun(no);
	cout<<no;
	
	return 0;
}

void fun(int &ref)
{
	cout<<ref<<endl;
	cout<<&ref<<endl;
	++ref;
	cout<<ref<<endl;
}
/*
10
0x6ffe1c
10
0x6ffe1c
11
11
*/
