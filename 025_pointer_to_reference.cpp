#include<iostream>
using std::cout;
using std::endl;

int main(void)
{
	int no=10;
	int &ref=no;
	
//	int& *p=&ref;  redeclaration of int*p
	int *p=&ref;
	
	cout<<ref<<"\t"<<no<<endl;;
	cout<<*p<<endl;
	
	return 0;
}
/*
10      10
10
*/
