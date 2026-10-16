#include<iostream>
using std::cout;
using std::endl;

class demo
{
	char chChar;
	int iNo;
	float fNo;
	double dNo;
	
	int *pPtr1;
	int *pPtr2;
	
	public:
		demo()
		{
			chChar = '\0';
			iNo = 0;
			fNo = 0.0f;
			dNo = 0.0;
			
			pPtr1 = NULL;
			pPtr2 = new int[3];
			if(NULL == pPtr2)
			{
				cout<<"Memory allocation FAILED"<<endl;
				return;
			}
            
			/*
			for(int iCounter = 0; iCounter < 3; iCounter++)
			    pPtr[iCounter] = 0;	
			*/
			memset(pPtr2, 0, 3 * sizeof(int));		
		}
		
		~demo()
		{
			chChar = '\0';
			iNo = 0;
			fNo = 0.0f;
			dNo = 0.0;
			
			pPtr1 = NULL;
			if(pPtr2 != NULL)
			{
				delete pPtr2;
				pPtr2 = NULL;
			}
			
			cout<<"Leaving destructor"<<endl;
		}
		
		void set(char chParam, int iParam,float fParam, double dParam)
		{
			chChar = chParam;
			iNo = iParam;
			fNo = fParam;
			dNo = dParam;
			
			pPtr1 = &iNo;
			for(int iCounter = 0;iCounter < 3; iCounter++)
			    pPtr2[iCounter] = iParam + iCounter +1; 
		}
		
		void Get()
		{
			cout<<"chChar is "<<chChar <<endl;
			cout<<"iNo is "<<iNo<<endl;
			cout<<"fNo is "<<fNo<<endl;
			cout<<"dNo is "<<dNo<<endl;
			
			cout<<"&iNo is "<<&iNo<<endl;
			cout<<"pPtr1 is "<<pPtr1<<endl;
			if(pPtr1 !=NULL)
			   cout<<"*pPtr1 is "<<*pPtr1<<endl;
			   
			cout<<"pPtr2 is "<<pPtr2 <<endl;
			cout<<"pPtr2 values are:\t";
			if(pPtr2 != NULL)
			{
				for(int iCounter = 0; iCounter<3; iCounter++)
				    cout<<pPtr2[iCounter]<<"\t";
				cout<<endl;    
			}  
		}
};

int main(void)
{
	demo obj1;
	
	cout<<"OBJ1:\n";
	obj1.Get();
	obj1.set('A',10,57.33f,69.33);
	cout<<"\nOBJ1:"<<endl;
	obj1.Get();
	
	demo obj2 = obj1;
	cout<<"\nOBJ2:"<<endl;
	obj2.Get();
	
	demo obj3;
	obj3 = obj1;
	cout<<"\nOBJ3:"<<endl;
	obj3.Get();
	
	cout<<"\nLeaving main"<<endl;
	
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

E:\Practice Material\VOID DERIVATIVES\Assignment of C++>cl 064_compiler_generated_copy_constructor.cpp
Microsoft (R) 32-bit C/C++ Optimizing Compiler Version 16.00.30319.01 for 80x86
Copyright (C) Microsoft Corporation.  All rights reserved.

064_compiler_generated_copy_constructor.cpp
C:\Program Files (x86)\Microsoft Visual Studio 10.0\VC\INCLUDE\xlocale(323) : warning C4530: C++ exception handler used, but unwind semantics are not enabled. Specify /EHsc
Microsoft (R) Incremental Linker Version 10.00.30319.01
Copyright (C) Microsoft Corporation.  All rights reserved.

/out:064_compiler_generated_copy_constructor.exe
064_compiler_generated_copy_constructor.obj

E:\Practice Material\VOID DERIVATIVES\Assignment of C++>064_compiler_generated_copy_constructor.exe
OBJ1:
chChar is
iNo is 0
fNo is 0
dNo is 0
&iNo is 00EFFAD0
pPtr1 is 00000000
pPtr2 is 01173F68
pPtr2 values are:       0       0       0

OBJ1:
chChar is A
iNo is 10
fNo is 57.33
dNo is 69.33
&iNo is 00EFFAD0
pPtr1 is 00EFFAD0
*pPtr1 is 10
pPtr2 is 01173F68
pPtr2 values are:       11      12      13

OBJ2:
chChar is A
iNo is 10
fNo is 57.33
dNo is 69.33
&iNo is 00EFFAF0
pPtr1 is 00EFFAD0
*pPtr1 is 10
pPtr2 is 01173F68
pPtr2 values are:       11      12      13

OBJ3:
chChar is A
iNo is 10
fNo is 57.33
dNo is 69.33
&iNo is 00EFFAB0
pPtr1 is 00EFFAD0
*pPtr1 is 10
pPtr2 is 01173F68
pPtr2 values are:       11      12      13

Leaving main
Leaving destructor
*/ 
