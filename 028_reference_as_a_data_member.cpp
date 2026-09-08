#include<iostream>
using std::cout;
using std::endl;

class demo
{
   int no;
   int &ref;
   
   public:
       demo() : ref(no)
	  {
	 	no=0;
	  } 
	  
	  void display()
	   {
	      cout<<"no: "<<no<<endl;
		  cout<<"ref: "<<ref<<endl;
	      cout<<"&no: "<<&no<<endl;
		  cout<<"&ref: "<<&ref<<endl;
	   }	
};

int main(void)
{
	demo obj;
	
	obj.display();
	cout<<"sizeof(demo):"<<sizeof(demo)<<endl;
	cout<<"sizeof(obj):"<<sizeof(obj);
	
	return 0;
}

/*
no: 0
ref: 0
&no: 0x6ffe10
&ref: 0x6ffe10
sizeof(demo):16
sizeof(obj):16
*/
