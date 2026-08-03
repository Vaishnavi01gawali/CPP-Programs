#include<iostream>
using std::cout;
using std::endl;

int main(void)
{
	int arr[3];
	int (&ref)[3]=arr;
	
	cout<<arr[0]<<endl;
	cout<<&arr<<endl;
	cout<<ref[0]<<endl;
	cout<<&ref<<endl;
	
	return 0;
}
/*
0
0x6ffe00
0
0x6ffe00
*/
