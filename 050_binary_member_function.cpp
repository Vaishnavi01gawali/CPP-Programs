#include<iostream>
using namespace std;

class CDemo
{
	int m_iNo1;
	int m_iNo2;
	
	public:
		CDemo(int iNo1=10,int iNo2=20)
		{
			m_iNo1=iNo1;
			m_iNo2=iNo2;
		}
		 
		CDemo operator +(CDemo &refObj2)
		{
			cout<<"In binary + operator\n\n";
			return CDemo(m_iNo1 + refObj2.m_iNo1, m_iNo2 + refObj2.m_iNo2 );
		}
		
		CDemo operator -(CDemo &refObj2)
		{
			cout<<"In binary - operator\n\n";
			return CDemo(m_iNo1 - refObj2.m_iNo1,m_iNo2 - refObj2.m_iNo2 ); 
		}
		 
		CDemo operator *(CDemo &refObj2)
		{
			cout<<"In binary * operator\n\n";
			return CDemo(m_iNo1 * refObj2.m_iNo1,m_iNo2 * refObj2.m_iNo2 ); 
		}
		
		CDemo operator /(CDemo &refObj2)
		{
			cout<<"In binary / operator\n\n";
			return CDemo(m_iNo1 / refObj2.m_iNo1,m_iNo2 / refObj2.m_iNo2 ); 
		}
		
		CDemo operator <<(CDemo &refObj2)
		{
			cout<<"In binary << operator\n\n";
			return CDemo(m_iNo1 << refObj2.m_iNo1,m_iNo2 << refObj2.m_iNo2 ); 
		}
		
		CDemo operator >>(CDemo &refObj2)
		{
			cout<<"In binary >> operator\n\n";
			return CDemo(m_iNo1 >> refObj2.m_iNo1,m_iNo2 >> refObj2.m_iNo2 ); 
		}
		
		CDemo & operator +=(CDemo &refObj2)
		{
			cout<<"In binary += operator\n\n";
			m_iNo1 += refObj2.m_iNo1;
			m_iNo2 += refObj2.m_iNo2;
			return *this; 
		}
		
		bool operator ==(CDemo &refObj2)
		{
			cout<<"In binary == operator\n";
			return ((m_iNo1 == refObj2.m_iNo1) && (m_iNo2 == refObj2.m_iNo2));
		}
		
		bool operator <(CDemo &refObj2)
		{
			cout<<"In binary < operator\n";
			return ((m_iNo1 < refObj2.m_iNo1) && (m_iNo2 < refObj2.m_iNo2));
		}
		
		bool operator > (CDemo &refObj2)
		{
			cout<<"In binary > operator\n";
			return ((m_iNo1 > refObj2.m_iNo1) && (m_iNo2 > refObj2.m_iNo2));
		}    	 
};

int main(void)
{
	CDemo obj1,obj2,obj3;
	
	obj3 = obj1 + obj2; //obj1 + obj2 => obj1.+(obj2);
	
	obj3 = obj1 - obj2;
	
	obj3 = obj1 * obj2;
	
	obj3 = obj1 / obj2;
	
	obj1 << obj2;
	
	obj1 >> obj2;
	
	obj2 += obj1;
	
	if(obj1 == obj2)
	    cout<<" Both objects are equal \n\n"<<endl;
	else
	    cout<<"Both objects are not equal\n\n"<<endl;
		
	if(obj1 < obj2)
	   cout<<"Obj1 is less than obj2\n\n"<<endl;
	else  
	   cout<<"Obj1 is greater than obj2\n\n"<<endl; 
	   
	if(obj1 > obj2)
	   cout<<"Obj1 is greater than obj2\n\n"<<endl;   	
	else
	   cout<<"Obj1 is less than obj2\n\n"<<endl; 
	   
	return 0;         
}

/*
In binary + operator

In binary - operator

In binary * operator

In binary / operator

In binary << operator

In binary >> operator

In binary += operator

In binary == operator
Both objects are not equal


In binary < operator
Obj1 is less than obj2


In binary > operator
Obj1 is less than obj2

*/
