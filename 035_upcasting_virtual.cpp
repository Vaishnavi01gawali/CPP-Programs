#include<iostream>
using std::cout;
using std::endl;

class base
{
   int no1;
   int no2;
   
   public:
       void fun1()
	   {
	  	 cout<<"In base fun1"<<endl;
	   }
	  virtual void fun2()
	   {
	  	 cout<<"In base virtual fun2 1"<<endl;
	   }	
	   virtual void fun2(int no)
	   {
	  	 cout<<"In base virtual fun2 2"<<endl;
	   }

	   void fun3()
	   {
	   	cout<<"In base fun3"<<endl;
	   }
	   virtual void fun4()
	   {
	  	 cout<<"In base virtual fun4"<<endl;
       }
	   void fun5()
	   {
	   	cout<<"In base fun5"<<endl;
	   }
	   virtual void fun6()
	   {
	  	 cout<<"In base virtual fun6"<<endl;
	   }
	   virtual void fun7()
	   {
	  	 cout<<"In base virtual fun7"<<endl;
	   }
};

class derived :public base
{
	int no3;
	int no4;
	
	public:
		void fun2(int no)
		{
			cout<<"In derived fun2"<<endl;
		}
		void fun3()
		{
			cout<<"In derived fun3"<<endl;
		}
		void fun4()
		{
			cout<<"In derived fun4"<<endl;
		}
		virtual void fun5()
		{
			cout<<"In derived  virtual fun5"<<endl;
		}
		virtual void fun7()
		{
			cout<<"In derived virtual fun7"<<endl;
		}
		virtual void fun8()
		{
			cout<<"In derived virtual fun8"<<endl;
		}
		virtual void fun9()
		{
			cout<<"In derived virtual fun9"<<endl;
		}
		
};
int main(void)
{
	base bobj;
	derived dobj;
	base *BP=NULL;
	derived *DP=NULL;
	
	bobj.fun1();
	bobj.fun2();
	bobj.fun2(10);
	bobj.fun3();
	bobj.fun4();
	bobj.fun5();
	bobj.fun6();
	bobj.fun7();
//	bobj.fun8();     Error : not member of class base
//	bobj.fun9();      Error : not member of class base
	
	dobj.fun1();
//	dobj.fun2();    function hidding
	dobj.fun2(20);
	dobj.fun3();
	dobj.fun4();
	dobj.fun5();
	dobj.fun6(); 
	dobj.fun7();
	dobj.fun8();
	dobj.fun9();
	
	
	BP = &bobj;
	BP->fun1();
	BP->fun2();
	BP->fun2(10);
	BP->fun3();
	BP->fun4();
	BP->fun5();
	BP->fun6();
	BP->fun7();
//	BP->fun8();    not in base
//	BP->fun9();    not in base
	
	DP = &dobj;
	DP->fun1();
//	DP->fun2();    function hidding
	DP->fun2(20);
	DP->fun3();
	DP->fun4();
	DP->fun5();
	DP->fun6();
	DP->fun7();
	DP->fun8();
	DP->fun9();
	
	BP = &dobj;
	BP->fun1();
	BP->fun2();
	BP->fun2(20);
	BP->fun3();
	BP->fun4();
	BP->fun5();
	BP->fun6();
	BP->fun7();
//	BP->fun8();       not in base
//	BP->fun9();       not in base
	
	base &Bref = dobj;
	Bref.fun1();
	Bref.fun2();
	Bref.fun2(20);
	Bref.fun3();
	Bref.fun4();
	Bref.fun5();
	Bref.fun6();
	Bref.fun7();
//	Bref.fun8();    not in base
//	Bref.fun9();    not in base
	
	return 0;
}
/*
In base fun1
In base virtual fun2 1
In base virtual fun2 2
In base fun3
In base virtual fun4
In base fun5
In base virtual fun6
In base virtual fun7
In base fun1
In derived fun2
In derived fun3
In derived fun4
In derived  virtual fun5
In base virtual fun6
In derived virtual fun7
In derived virtual fun8
In derived virtual fun9
In base fun1
In base virtual fun2 1
In base virtual fun2 2
In base fun3
In base virtual fun4
In base fun5
In base virtual fun6
In base virtual fun7
In base fun1
In derived fun2
In derived fun3
In derived fun4
In derived  virtual fun5
In base virtual fun6
In derived virtual fun7
In derived virtual fun8
In derived virtual fun9
In base fun1
In base virtual fun2 1
In derived fun2
In base fun3
In derived fun4
In base fun5
In base virtual fun6
In derived virtual fun7
In base fun1
In base virtual fun2 1
In derived fun2
In base fun3
In derived fun4
In base fun5
In base virtual fun6
In derived virtual fun7
*/
