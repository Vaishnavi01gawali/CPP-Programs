#include<iostream>
#include<cstdlib>
using std::cout;
using std::cin;
using std::endl;

class demo
{
	public:
		demo()
		{
			cout<<"Defalut Constructor"<<endl;
		}
		demo(int param)
		{
			cout<<"parameterize 1"<<endl;
		}
		
		demo(int param1,int param2)
		{
			cout<<"parameterize 2"<<endl;
		}
		
		~demo()
		{
			cout<<"In destructor"<<endl;
		}
};

int main(void)
{
	demo *p1,*p2,*p3,*p4,*p5,*p6;
	
	cout<<"p1:"<<endl;
	p1=(demo*)malloc(sizeof(demo));
	//one objcet , no constructor
	
	cout<<"\n p2:"<<endl;
	p2=new demo;
	//one objcet,default constructor
	
	cout<<"\n p3:"<<endl;
	p3=new demo(10);
	//one objcet,parameterized 1
	
	cout<<"\n p4:"<<endl;
	p4=new demo(10,20);
	//one object, parameterized 2
	
	cout<<"\n p5:"<<endl;
	p5=new demo[3];
	//3 object, default,default,default
	
	cout<<"\n p6:"<<endl;
	p6=new demo[3]{{10,20},{10},{}};
	// 3 object, parameterized 2,parameterized 1,default
	
	cout<<"\nfree(p1): "<<endl;
	free (p1);
	
	cout<<"\ndelete p2: "<<endl;
	delete p2;
	
	cout<<"\ndelete p3: "<<endl;
	delete p3;
	
	cout<<"\ndelete p4: "<<endl;
	delete p4;
	
	cout<<"\ndelete []p5: "<<endl;
	delete []p5;
	
	cout<<"\ndelete []p6: "<<endl;
	delete []p6;
}

/*
p1:

 p2:
Defalut Constructor

 p3:
parameterize 1

 p4:
parameterize 2

 p5:
Defalut Constructor
Defalut Constructor
Defalut Constructor

 p6:
parameterize 2
parameterize 1
Defalut Constructor
free(p1):

delete p2:
In destructor

delete p3:
In destructor

delete p4:
In destructor

delete []p5:
In destructor
In destructor
In destructor

delete []p6:
In destructor
In destructor
In destructor
*/
