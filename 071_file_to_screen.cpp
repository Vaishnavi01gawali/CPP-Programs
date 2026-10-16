#include<iostream>
#include<fstream>
using namespace std;

int main(void)
{
	ifstream fin;
	char str[50];
	
	fin.open("File_to_screen.txt");
	if(fin.fail())
	{
		cout<<"\nCan't Open File\n";
		return -1;
	}
	
	while(fin.getline(str,sizeof(str)))
      cout<<str<<endl;
      
    cin.get();
	
	return 0;  
}
