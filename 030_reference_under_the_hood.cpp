#include<iostream>
using std::cout;
using std::endl;

int main(void)
{
	int no=10;
	int &ref=no;
	
	cout<<ref<<endl;
	cout<<&ref<<endl;
	
	return 0;
}
/*
10
0x6ffe14
*/
