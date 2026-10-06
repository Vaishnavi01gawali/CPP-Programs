#include<iostream>
using namespace std;

class CDemo
{
	int m_iNo1;
	int m_iNo2;
	
	public:
		CDemo(int iNo1=10, int iNo2=20)
		{
			m_iNo1=iNo1;
			m_iNo2=iNo2;
		}
		
		CDemo* This()
		{
			return this;
		}
		
		friend CDemo& operator +(CDemo &refObj);
		friend CDemo operator -(CDemo &refObj);
		friend CDemo operator ~(CDemo &refObj);
		friend CDemo* operator &(CDemo &refObj);
		friend CDemo& operator ++(CDemo &refObj);
		friend CDemo operator ++(CDemo &refObj, int);
		friend CDemo& operator --(CDemo &refObj);
		friend CDemo operator --(CDemo &refObj,int);		
};

CDemo& operator +(CDemo &refObj)
{
	cout<<"In unary + operator\n";
	return refObj;
}

CDemo operator -(CDemo &refObj)
{
	cout<<"In unary - operator\n";
	return CDemo(-refObj.m_iNo1,-refObj.m_iNo2);
}

CDemo operator ~(CDemo &refObj)
{
	cout<<"In unary - operator\n";
	return CDemo(~refObj.m_iNo1,~ refObj.m_iNo2);
}

CDemo* operator &(CDemo &refObj)
{
	cout<<"In unary & operator\n";
	return refObj.This();
}

CDemo& operator ++(CDemo &refObj)
{
	cout<<"In Pre-increment operator\n";
	refObj.m_iNo1++;
	refObj.m_iNo2++;
	return refObj;
}

CDemo operator ++(CDemo &refObj,int)
{
	cout<<"In Post-increment operator\n";
	CDemo temp (refObj.m_iNo1, refObj.m_iNo2);
	refObj.m_iNo1++;
	refObj.m_iNo2++;
	return temp;
}
CDemo& operator --(CDemo &refObj)
{
	cout<<"In Pre-decrement operator\n";
	refObj.m_iNo1--;
	refObj.m_iNo2--;
	return refObj;
}

CDemo operator --(CDemo &refObj,int)
{
	cout<<"In Post-decrement operator\n";
	CDemo temp(refObj.m_iNo1,refObj.m_iNo2);
	refObj.m_iNo1--;
	refObj.m_iNo2--;
	return temp;
}

int main(void)
{
	CDemo obj;
	
	+obj;   // +(obj);
	
	-obj;
	
	~obj;
	
	++obj;
	
	obj++;
	
	--obj;
	
	obj--;
	
	cout<<&obj;
	
	return 0;
	
}

/*
In unary + operator
In unary - operator
In unary - operator
In Pre-increment operator
In Post-increment operator
In Pre-decrement operator
In Post-decrement operator
In unary & operator
*/
