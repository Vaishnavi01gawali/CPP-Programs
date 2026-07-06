#include<iostream>
using std::cout;
using std::cout;

class demo
{
	int iNo1;
	int iNo2;
	public:
		demo::demo()
		{
			cout<<"Default Constructor";
			iNo1=0;
			iNo2=0;
		}
		demo::demo(int Param)
		{
			cout<<"Parameterised Constructor 1";
			iNo1=Param;
			iNo2=Param;
		}
		demo::demo(int Param1,int Param2)
		{
			cout<<"Parameterised Constructor 2";
			iNo1=param1;
			iNo2=Param2;
		}
		demo::demo(demo&ref)
		{
			cout<<"Copy Constructor 1";
			iNo1=ref.iNo1;
			iNo2=ref.iNo2;
		}
		demo::demo(demo&ref,int iNo)
		{
			cout<<"Copy Constructor 2";
			iNo1=ref.iNo1+iNo;
			iNo2=ref.iNo2+iNo;
		}
		/*
		demo::demo(demo&ref,int iNo1)
		{
			cout<<"Copy Constructor 2";
			iNo1=ref.iNo1+iNo1;
			iNo2=ref.iNo2+iNo1;
		}
		*/
		~demo()
		{
			cout<<"Destructor";
			iNo1=0;
			iNo2=0;
		}
	
};

int main(void)
{
	demo obj1;
	demo obj2(10);
	demo obj3(20,30);
	demo obj4(obj3);
	demo obj5(obj4,40);
	
	return 0;
}
