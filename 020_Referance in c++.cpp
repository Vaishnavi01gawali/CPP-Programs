#include<iostream>
using std::cout;
using std::endl;

int main(void)
{
	int no1=10;
	int &ref=no1;
	int no2=20;
	
	cout<<no1<<"\t"<<ref<<endl;
	cout<<&no1<<"\t"<<&ref<<endl;
	
	ref=no2;
//	&ref=no2;        error l-value required
//	int &ref=no2;    refefinition
	
	return 0;
}
