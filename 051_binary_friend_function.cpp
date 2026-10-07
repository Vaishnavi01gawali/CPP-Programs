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
		
		friend CDemo operator +(CDemo &, CDemo &);
		friend CDemo operator -(CDemo &, CDemo &);
		friend CDemo operator *(CDemo &, CDemo & );
		friend CDemo operator /(CDemo &, CDemo & );
		friend CDemo operator <<(CDemo &, CDemo & );
		friend CDemo operator >>(CDemo &, CDemo & );
		friend CDemo& operator +=(CDemo &, CDemo & );
		friend bool operator ==(CDemo &, CDemo & );
		friend bool operator <(CDemo &, CDemo & );
		friend bool operator >(CDemo &, CDemo & );
};

CDemo operator +(CDemo &refObj1, CDemo &refObj2)
{
	cout<<"In binary + operator\n\n";
	return CDemo (refObj1.m_iNo1 + refObj2.m_iNo1, refObj1.m_iNo2 + refObj2.m_iNo2);
}

CDemo operator -(CDemo &refObj1, CDemo &refObj2)
{
	cout<<"In binary - operator\n\n";
	return CDemo (refObj1.m_iNo1 - refObj2.m_iNo1, refObj1.m_iNo2 - refObj2.m_iNo2);
}

CDemo operator *(CDemo &refObj1, CDemo &refObj2)
{
	cout<<"In binary * operator\n\n";
	return CDemo (refObj1.m_iNo1 * refObj2.m_iNo1, refObj1.m_iNo2 * refObj2.m_iNo2);
}

CDemo operator /(CDemo &refObj1, CDemo &refObj2)
{
	cout<<"In binary / operator\n\n";
	return CDemo (refObj1.m_iNo1 / refObj2.m_iNo1, refObj1.m_iNo2 / refObj2.m_iNo2);
}

CDemo operator <<(CDemo &refObj1, CDemo &refObj2)
{
	cout<<"In binary << operator\n\n";
	return CDemo (refObj1.m_iNo1 << refObj2.m_iNo1, refObj1.m_iNo2 << refObj2.m_iNo2);
}

CDemo operator >>(CDemo &refObj1, CDemo &refObj2)
{
	cout<<"In binary >> operator\n\n";
	return CDemo (refObj1.m_iNo1 >> refObj2.m_iNo1, refObj1.m_iNo2 >> refObj2.m_iNo2);
}

CDemo& operator +=(CDemo &refObj1, CDemo &refObj2)
{
	cout<<"In binary += operator\n\n";
	refObj1.m_iNo1 += refObj2.m_iNo1;
	refObj1.m_iNo2 += refObj2.m_iNo2;
	return refObj1;
}

bool operator ==(CDemo &refObj1, CDemo &refObj2)
{
	cout<<"In binary == operator\n";
	return ((refObj1.m_iNo1 == refObj2.m_iNo1) && (refObj1.m_iNo2 == refObj2.m_iNo2));
}

bool operator <(CDemo &refObj1, CDemo &refObj2)
{
	cout<<"In binary < operator\n";
	return ((refObj1.m_iNo1 < refObj2.m_iNo1) && (refObj1.m_iNo2 < refObj2.m_iNo2));
}

bool operator >(CDemo &refObj1, CDemo &refObj2)
{
	cout<<"In binary > operator\n";
	return ((refObj1.m_iNo1 > refObj2.m_iNo1) && (refObj1.m_iNo2 > refObj2.m_iNo2));
}

int main(void)
{
	CDemo obj1, obj2, obj3;
	
	obj3 = obj1 + obj2;
	
	obj3 = obj1 - obj2;
	
	obj3 = obj1 * obj2;
	
	obj3 = obj1 / obj2;
	
	obj1 << obj2;
	
	obj1 >> obj2;
	
	obj2 += obj1;
	
	if(obj1 ==  obj2)
	   cout<<"Both objects are equal\n\n"<<endl;
	else
	   cout<<"Both objects are not equal\n\n"<<endl;
	   
	if(obj1 < obj2)
	   cout<<"obj1 is less than obj2\n\n"<<endl;
	else
	   cout<<"obj1 is greater than obj2\n\n"<<endl;
	   
	if(obj1 > obj2)
	   cout<<"obj1 is greater than obj2\n\n"<<endl;
	else
	   cout<<"obj1 is less than obj2\n\n"<<endl;
	           
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
obj1 is less than obj2


In binary > operator
obj1 is less than obj2
/*
