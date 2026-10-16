#include<iostream>
#include<fstream>
using namespace std;

int main(void)
{
	ofstream fout;
	char ch = 'Y';
	
	struct student
	{
		char name[40];
		int roll_no;
		float perc;
	};
	
	struct student s;
	
	fout.open("student_structure_from_keyword_to_file.txt");
	if(fout.fail())
	{
		cout<<"\nCan't Open file\n";
		return -1;
	}
	
	while(ch == 'Y' || ch=='Y')
	{
		cout<<"\n\nEnter name,roll_no and percentage:\n";
		cin>>s.name>>s.roll_no>>s.perc;
		fout<<s.name<<"\t"<<s.roll_no<<"\t"<<s.perc<<endl;
		
		cout<<"\nAdd another record (Y/N)";
		fflush(stdin);
		cin>>ch;
		
	}
	cin.get();
	return 0;
}
