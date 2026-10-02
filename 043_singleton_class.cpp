#include<iostream>
using std::cout;
using std::cin;
using std::endl;

class demo
{
	int data;
	static demo *p;
	
	demo()
	{
		cout<<"In Constructor"<<endl;
		data=0;
	}
/*	
	demo(demo &ref)                                                 Error: 'demo::demo(demo&)' is Private
	{
		cout<<"In copy constructor\t"<<this<<"\t"<<&ref<<endl;
		data = ref.data;
	}
	
	~demo()                                                        Error: 'demo::~demo()' is Private
	{
		cout<<"In destructor\t"<<this<<endl;
		data=0;
	}
*/	
public:
	
    static demo* get_object()
	{
		if(NULL == p)
		   p = new demo;
		else
		{
			bool ret;
			
			cout<<"\nThis is singleton class,you  can't create another objcet\n"; 
			cout<<"Are you want to use existing object?(0/10)\t";
			cin>>ret;
			
			if(ret == false)
			   return NULL;
		   }   
		   
		   return p;
		}	
		
	static void delete_object()
	{
		if(p != NULL)
		{
			delete p;
			p = NULL;
			cout<<"\nObject destroyed\n"<<endl;
		}
	}
		
	void set_data(int param)
	{
		data = param;
	}
		
	void get_data()
	{
		cout<<"Data is"<<data<<endl;
	}
};

demo* demo::p = NULL;

int main(void)
{
	//demo obj;    //Error,as private constructor
	
	demo *p1 = NULL;
	p1 = demo::get_object();
	if(p1!=NULL)
	{
		cout<<endl<<p1<<endl;
		p1->get_data();
		p1->set_data(10);
		p1->get_data();
	}
	
	demo *p2 = demo::get_object();
	if(p2 != NULL)
	{
		cout<<endl<<p2<<endl;
		p2->get_data();
		p2->set_data(20);
		p2->get_data();
	}
	
	demo::delete_object();
	
	p1 = demo::get_object();
	if(p1 != NULL)
	{
		cout<<endl<<p1<<endl;
		p1->get_data();
		p1->set_data(30);
		p1->get_data();
	}
	
	demo obj2 = *p1;
	
	cout<<"\nLeaving main\n";
	
//	demo::delete_object();
	
	return 0;
}

/*
In Constructor

0x1a1570
Data is0
Data is10

This is singleton class,you  can't create another objcet
Are you want to use existing object?(0/10)      5

0x1a1570
Data is10
Data is20

Object destroyed

In Constructor

0x1a1570
Data is0
Data is30

Leaving main
*/
