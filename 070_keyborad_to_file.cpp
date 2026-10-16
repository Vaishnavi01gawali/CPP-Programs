#include<iostream>
#include<fstream>
using namespace std;

int main(void)
{
	ofstream fout;
	char str[50];
	
	fout.open("keyword_to_file.txt");
	if(fout.fail())
	{
		cout<<"\n Can't open File\n";
		return -1;
	}
	cout<<"\n Enter Strings:(press cntl+2 for quit)\n";
	while(cin.getline(str,sizeof(str)))
	    fout<<str<<endl;
	    
	cin.get();
	
	return 0;    
}
