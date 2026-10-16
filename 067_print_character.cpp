#include<iostream>
#include<fstream>
using namespace std;

int main(void)
{
	char ch;
	ifstream fin;
	
	fin.open("print_characters.txt");
	if(fin.fail())
	{
		cout<<"\nCan't Open File\n";
		return  -1;
	}
	
	while(fin.get(ch))
	    cout<<ch;
	    
	cin.get();
	
	return 0;    
}
