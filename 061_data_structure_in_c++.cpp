#include<iostream>
using std::cout;
using std::endl;
using std::ostream;

class list;

class node
{
	int iData;
	node *pNext;
	
	public:
		node()
		{
			iData = 0;
			pNext = NULL;
		}
		
		~node()
		{
			iData = 0;
			pNext = NULL;
		}
		
		friend  class list;
		friend ostream& operator <<(ostream &, list &);
};

class list
{
	node *pFirst;
	
	public:
		list()
		{
			pFirst = NULL;
		}
		
		~list()
		{
			cout<<"\n list destructor"<<endl;
			if(pFirst != NULL)
			{
				DeleteAll();
				pFirst = NULL;
			}
			
		}
		
		void InsertLast(int iNo)
		{
			node *pTemp = NULL;
			node *pNewNode = NULL;
			
			pNewNode = new node;
			if (NULL == pNewNode)
			{
				cout<<"Memory allocation FAILED"<<endl;
				return;
			}
			
			pNewNode->iData = iNo;
			pNewNode->pNext = NULL;
			
			if(NULL == pFirst)
			{
				pFirst = pNewNode;
				return;
			}
			
			pTemp = pFirst;
			while(pTemp->pNext != NULL)
			    pTemp = pTemp->pNext;
			    
			pTemp->pNext = pNewNode;    
		}
		
		void Display()
		{
			node *pHead = pFirst;
			
			if(NULL == pHead)
			{
				cout<<"List is empty"<<endl;
				return;
			}
			
			cout<<"List is:"<<endl;
			while(pHead != NULL)
			{
				cout<<"|"<<pHead->iData<<"|";
				pHead = pHead->pNext;
			}
			cout<<endl;
		}
		
		void DeleteAll()
		{
			node *pTemp = NULL;
			
			while(pFirst != NULL)
			{
				pTemp = pFirst;
				pFirst = pTemp->pNext;
				delete pTemp;
			}
			cout<<"\nAll nodes deleted  successfully"<<endl;
		}
		friend ostream& operator <<(ostream &,list &);
};

ostream& operator<<(ostream &out, list &lst)
{
	node *pHead = lst.pFirst;
	
	if(NULL == pHead)
	{
		out<<"List is empty"<<endl;
		return out;
	}
	
	out<<"List is:"<<endl;
	while(pHead != NULL)
	{
		out<<"|"<<pHead->iData<<"|->";
		pHead = pHead->pNext;
	}
	out<<endl;
	
	return out;
}

int main(void)
{
	list lst1;
	list lst2;
	
	lst1.InsertLast(10);
	lst1.InsertLast(20);
	lst1.InsertLast(30);
	
	lst2.InsertLast(100);
	lst2.InsertLast(200);
	lst2.InsertLast(300);
	
	cout<<"Fist ";
	lst1.Display();
	cout<<"\n Second";
	lst2.Display();
	
	cout<<"\nFirst"<<lst1<<endl;
	cout<<"Second"<<lst2<<endl;
	
	cout<<"First"<<lst1<<endl<<"Second"<< lst2<<endl;
	
	lst1.DeleteAll();
	lst2.DeleteAll();
	
	return 0;
}

/*
Fist List is:
|10||20||30|

 SecondList is:
|100||200||300|

FirstList is:
|10|->|20|->|30|->

SecondList is:
|100|->|200|->|300|->

FirstList is:
|10|->|20|->|30|->

SecondList is:
|100|->|200|->|300|->


All nodes deleted  successfully

All nodes deleted  successfully

 list destructor

 list destructor
 */

