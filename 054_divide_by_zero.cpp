#include<cstdlib>
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(void)
{
	int numerator;
	int denominator;
	int quotient;
	
	cout<<"Enter numerator : \t";
	cin>>numerator;
	cout<<"Enter denominator:\t";
	cin>>denominator;
	
	try
	{
		if(denominator ==0)
		   throw denominator;
		quotient = numerator / denominator;   
	}
	catch(int exception)
	{
		cout<<"Divide by Zero Exception\n";
		exit(0);
	}
	cout<<"Quotinet is "<<quotient<<endl;
	
	return 0;
}

/*
In Fun1
In Fun1 pri is:10
In Fun1 pub is:20
In Fun1 pro is:30


In Fun2
In Fun2 pri is:40
In Fun2 pub is:50
In Fun2 pro is:60
*/
