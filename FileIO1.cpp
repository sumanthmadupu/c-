#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char str[18] = "Test.txt";
	fstream FILE;
	FILE.open(str,ios::in);
	
	if(FILE.is_open())
	{
		string line;
		//while(FILE)     //This will also work
		while(!FILE.eof())
		{
			getline(FILE,line);
			cout << line << endl;
		}
		FILE.close();
	}
	else
	{
		cout << "Couldn't open " << str << endl;
	}
	return 0;
}
