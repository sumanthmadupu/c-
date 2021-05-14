#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char input_file[18] = "Test1.txt";
	fstream input;
	
	input.open(input_file,ios::in);
	
	if(!input.is_open())
	{
		cout << "Error. Couldn't open " << input_file << endl;
	}
	else
	{
		while(input) //or while(!input.eof())
		{
			string line;
			getline(input,line,':');
			int population;
			input >> population;
			cout << "'" << line << "'" << " -- " << "'" << population << "'" << endl;
		}
		input.close();
	}
	return 0;
}

//Code isn't complete , work on how to parse text files more precisely
//Also checkout how to read and write binary files
