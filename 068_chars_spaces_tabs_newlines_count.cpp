#include<iostream>
#include<fstream>
using namespace std;

int main(void)
{
	ifstream fin("chars_spaces_tabs_newlines_count.txt");
	if(fin.fail())
	{
		cout<<"\nCan't open File\n";
		return -1;
	}
	
	char ch;
	int no_of_chars = 0;
	int no_of_spaces = 0;
	int no_of_tabs = 0;
	int no_of_lines = 0;
	
	while(fin.get(ch))
	{
		no_of_chars++;
		
		if(ch == '')
		   no_of_spaces++;
		   
		if(ch == '\t')
		   no_of_tabs++;
		   
		if(ch == '\n')
		   no_of_lines++;       
	}
	cout<<"\nNo of characters are"<<no_of_chars<<endl;
	cout<<"No of spaces are "<<no_of_spaces<<endl;
	cout<<"No of tabs are"<<no_of_tabs<<endl;
	cout<<"No of lines are"<<no_of_lines;
	
	cin.get();
	return 0;
}
