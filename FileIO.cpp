#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char file_name[18] = "Test.txt";
	fstream FILE;
	
	FILE.open(file_name,ios::out);
	
	if(FILE.is_open())
	{
		FILE << "This is a line" << endl;
		FILE << "This is another line" << endl;
		FILE.close();
	}
	else
	{
		cout << "Couldn't open " << file_name << endl;
	}
	return 0;
}
