#include<iostream>
using std::cout;
using std::endl;

int my_max(int no1, int no2)
{
	cout<<"Normal"<<endl;
	if(no1 > no2)
	   return no1;
	return no2;   
}

template <typename T>
T my_max(T no1, T no2)
{
	cout<<"Template 1"<<endl;
	if (no1 > no2)
	    return no1;
	return no2;    
}

template<typename T>
T my_max(T no1, T no2, T no3)
{
	cout<<"Template 2"<<endl;
	return my_max(no1, my_max(no2,no3));
}

int main(void)
{
	my_max(10,20,30);
	my_max(10,20);
	my_max(57.33, 69.33);
	my_max(57.33f, 69.33f);
	my_max<float>(57.33,69.33);
	my_max<>(10,20);
	my_max(10,'A');
//	my_max(10,20,'A');   Error : no matching function for call to my_max(int,int,char)
	
	return 0;
}

/*
Template 2
Normal
Normal
Normal
Template 1
Template 1
Template 1
Template 1
Normal
*/
