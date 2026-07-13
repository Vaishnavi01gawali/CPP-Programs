#include<iostream>
using namespace std;

class demo
{
   int no1;
   int no2;
   int no3;
   
   public:
      demo(int param):no2(++param),no3(++param),no1(++param)
	  {
	  	cout<<"constructor,member inislized list"<<endl;
      }	
      void display()
      {
      	cout<<no1<<"\t"<<no2<<"\t"<<no3;
	  }
};

int main(void)
{
	demo obj(10);
	obj.display();
	
	return 0;
}
/*
constructor,member inislized list
11      12      13
*/
