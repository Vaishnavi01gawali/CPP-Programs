#include<iostream>
#include<iomanip>
using std::cout;
using std::endl;
using std::setw;

class base
{
	protected:
		int no;
		int no1;
	
	public:
	    base()
		{
			cout<<"In base constructor"<<endl;
			no = 10;
			no1 = 100;
		}	
};

class derived1 : public virtual base
{
	protected:
		int no;
		int no2;
		
	public:
	    derived1()
		{
			cout<<"In derived1 constructor"<<endl;
			no = 20;
			no2 = 200;
		}	
};

class derived2 : public virtual base
{
	protected:
		int no;
		int no3;
		
	public:
	    derived2()
		{
			cout<<"In derived2 constructor"<<endl;
			no = 30;
			no3 = 300;
	    }
};

class derived : public derived1, public  derived2
{
	public:
		derived()
		{
			cout<<"In derived constructor"<<endl;
		}
		
		void display()
		{
			cout<<base::no<<endl;
			cout<<derived1::no<<endl;
			cout<<derived2::no<<endl;
			cout<<base::no1<<endl;
			cout<<derived1::no1<<endl;
			cout<<derived2::no1<<endl;
			cout<<no2<<endl;
			cout<<no3<<endl<<endl;
			
			cout<<"derived1 :: no"<<"\t"<<derived1::no<<"\t"<< (int) &(derived1::no) <<endl;
			cout<<"no2"<<"\t\t"<<no2<<"\t"<< (int) &no2<<endl;
			cout<<"derived2::no"<<"\t"<<derived2::no<<"\t"<< (int) &(derived2::no)<<endl;
			cout<<"no3"<<"\t\t"<<no3<<"\t"<< (int) &no3<<endl;
			cout<<"base::no"<<"\t"<<base::no<<"\t"<< (int) &(base::no1)<<endl;
			cout<<"base::no1"<<"\t"<< (int) &(base::no1)<<endl;
			cout<<"derived1::no1"<<"\t"<<derived1::no1<<"\t"<< (int) &(derived1::no1)<<endl;
		    cout<<"derived2::no1"<<"\t"<<derived2::no1<<"\t"<< (int) &(derived2::no1)<<endl;
	    }
};

int main(void)
{
	derived dobj;
	
	cout<<"size of dobj = "<<sizeof(dobj)<<endl;
	cout<<"&dobj = "<<(int)&dobj<<endl;
	
	dobj.display();
	
	return 0;
}

/*
In base constructor
In derived1 constructor
In derived2 constructor
In derived constructor
size of dobj = 32
&dobj = 19921788
10
20
30
100
100
100
200
300

derived1 :: no  20      19921792
no2             200     19921796
derived2::no    30      19921804
no3             300     19921808
base::no        10      19921816
base::no1       19921816
derived1::no1   100     19921816
derived2::no1   100     19921816
*/
