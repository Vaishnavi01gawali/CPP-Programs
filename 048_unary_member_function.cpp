#include<iostream>
using namespace std;

class CDemo
{
	int m_iNo1;
	int m_iNo2;
	
	public:
		CDemo(int iNo1=10, int iNo2=20)
		{
			m_iNo1 = iNo1;
			m_iNo2 = iNo2;
		}
		
		CDemo& operator +()
		{
			cout<<"In unary + operator\n";
			return *this;
		}
		
		CDemo operator -()
		{
			cout<<"In unary - operator\n";
			return CDemo(-m_iNo1, -m_iNo2);
		}
		
		CDemo operator ~()
		{
			cout<<"In unary ~ operator\n";
			return CDemo(~m_iNo1, ~m_iNo2);
		}
		
		CDemo& operator ++()
		{
			cout<<"In Pre-inrement operator\n";
			m_iNo1++;
			m_iNo2++;
			return *this;
		}
		
		CDemo operator ++(int)
		{
			cout<<"In Post-inrement operator\n";
			CDemo temp(m_iNo1,m_iNo2);
			m_iNo1++;
			m_iNo2++;
			return temp;
		}
		
		CDemo& operator --()
		{
			cout<<"In Pre-decrement operator\n";
			m_iNo1--;
			m_iNo2--;
			return *this;
		}
		
		CDemo operator --(int)
		{
			cout<<"In Post-decrement operator\n";
			CDemo temp(m_iNo1,m_iNo2);
			m_iNo1--;
			m_iNo2--;
			return temp;
		}
};

int main(void)
{
	CDemo obj;
	
	+obj; //obj.+();
	
	-obj;
	
	~obj;
	
	++obj;
	
	obj++;
	
    --obj;
    
    return 0;
}

/*
In unary + operator
In unary - operator
In unary ~ operator
In Pre-inrement operator
In Post-inrement operator
In Pre-decrement operator
*/
