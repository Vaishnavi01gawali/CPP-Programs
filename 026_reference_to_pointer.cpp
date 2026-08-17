#include<iostream>
using std::cout;
using std::endl;

int main(void)
{
	int no=10;
	int *p=&no;
	int* &ref=p;
	
	cout<<p<<"\t"<<ref<<endl;
	cout<<*p<<"\t"<<*ref<<endl;
	
	return 0;
}
/*
0x6ffe04        0x6ffe04
10      10
*/
