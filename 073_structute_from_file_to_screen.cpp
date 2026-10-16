#include<iostream>
#include<fstream>
using namespace std;

int main(void)
{
	ifstream fin;
	
	struct student
	{
		char name[40];
		int roll_no;
		float perc;
	};
	student s;
	
	fin.open("student_structure_from_file_to_screen.txt");
	if(fin.fail())
	{
		cout<<"\nCan't Open File\n";
		return -1;
	}
	
	/*while(fin>>s.name>>s.roll_no>>s.perc)
	    cout<<"\t"<<s.name<<"\t"<<s.roll_no<<"\t"<<s.perc<<endl;
	*/ 
	
	char str[50];
	fin.read(str.sizeof(str));
	cout.write(str,sizeof(str));
	
	cin.get();
	
	return 0;   
	    
}
