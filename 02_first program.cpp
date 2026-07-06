#include<iostream>
using namespace std;

class demo
{
   	int iNo1;
	int iNo2;
    public:
	   demo()
	   {
		   iNo1=0;
		   iNo2=0;
		}
		demo(int Param1,int Param2)
		{
		    iNo1=Param1;
			iNo2=Param2;
		}
		int Addition()
		{
			return iNo1+iNo2;
		}	 	
};

int main(void)
{
	int iNo1;
	int iNo2;
	int iAns;
	
	demo obj1;
	iAns=obj1.Addition();
	cout<<"OBJ1: Answer is \t "<<iAns<<endl;
	
	cout<<"Enter Two Number:\t";
	cin>>iNo1>>iNo2;
	
	demo obj2(iNo1,iNo2);
	iAns=obj2.Addition();
	cout<<"OBJ2: Answer is \t"<<iAns<<endl;
	
	cin.get();
	
	return 0;
	
}
