#include<iostream>
using std::cout;
using std::endl;

int main(void)
{
	int no=10; 
	int &ref1=no;
	int &ref2=no;
	
	cout<<no<<"\t"<<ref1<<"\t"<<ref2<<endl;
	cout<<&no<<"\t"<<&ref1<<"\t"<<&ref2<<endl;
	
	return 0;
}
/*
10      10      10
0x6ffdfc        0x6ffdfc        0x6ffdfc
*/
