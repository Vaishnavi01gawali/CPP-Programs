#include<iostream>
#include<fstream>
using namespace std;

int main(void)
{
	ofstream fout;
	ifstream fin;
	char ch;
	
	fin.open("file_copy_source.txt");
	if(fin.fail())
	{
		cout<<"\nCan't open Source File\n";
		return -1;
	}
	fout.open("file copy destination.txt");
	if(fout.fail())
	{
		cout<<"\nCan't open destination Fail\n";
		fin.close();
		return -1;
	}
	
	while(fin.get(ch))
	    fout.put(ch);
	    
	//fout<<fin.rdbuf();
	
	cout<<"\n Copied Successfully\n";
	
	cin.get();
	return 0;    
}
