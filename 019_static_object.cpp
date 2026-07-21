#include<iostream>
using std::cout;
using std::endl;


 class demo
 {
 	public:
 		demo()
 		{
 		  cout<<"In Constructor"<<endl;
		}
		~demo()
		{
			cout<<"In Destructor"<<endl<<endl;
		}
 };
 void fun1()
 {
 	cout<<"In Fun1 "<<endl;demo obj;
 	cout<<"Leaving fun1"<<endl;
 }
 void fun2()
 {
 	cout<<"In Fun2 "<<endl;static demo obj;
 	cout<<"Leaving fun2"<<endl;
 }
 
 int main(void)
 {
 	cout<<"In main"<<endl<<endl;
 	cout<<"calling fun1 2 times"<<endl;
 	fun1();
 	fun1();
 	
 	cout<<"calling fun2 2 times"<<endl;
 	fun2();
 	fun2();
 	
 	cout<<"Leaving main"<<endl;
 	
 	return 0;
 	
 }
 /*
 In main

calling fun1 2 times
In Fun1
In Constructor
Leaving fun1
In Destructor

In Fun1
In Constructor
Leaving fun1
In Destructor

calling fun2 2 times
In Fun2
In Constructor
Leaving fun2
In Fun2
Leaving fun2
Leaving main
In Destructor
*/
