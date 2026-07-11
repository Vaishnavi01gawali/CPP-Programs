#include<iostream>
using namespace std;

class demo
{
   const int no1;
   int no2;
   
   public:
      demo():no1(0)
	  {
	  	cout<<"default constructor"<<endl;      //default constructor
	  	no2=0;
	  }	
	  demo(int param):no1(param)
	  {
	  	cout<<"parameterized constructor";      //parameterized constructor
	  	no2=param;
	  }
};
int main(void)
{
	demo obj1;
	demo obj2(10);
	
	return 0;
}
