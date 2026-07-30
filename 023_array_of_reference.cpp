#include<iostream>
using std::cout;
using std::endl;

int main(void)
{
	int no=10;
	int &ref1=no;
	int &ref2=no;
	int ref3=no;
	
//	int &arr[3]={ref1,ref2,ref3};
	int arr[3]={ref1,ref2,ref3};
	
	return 0;
}
