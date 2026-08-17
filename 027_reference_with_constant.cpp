#include<iostream>
using std::cout;
using std::endl;

int main(void)
{
	int no=10;
	int &ref=no;
	no++;
	ref++;
	
	int no1=10;
	const int &ref1=no1;
	no1++;
//	ref1++;                 error refering to constant
	
	const int no2=10;
//	int &ref2 =no2;      no2  is constant
//	no2++;                  error no2 is constant
//	ref2++;                 error refering to constant
	
	const int no3=10;
	const int &ref=no3;
	no3++;
	ref++;
	
	return 0;
	
}
