#include<iostream>
using namespace std;

class c1
{
	public:
		c1(string str)
		{
			cout << "In the constructor of object : " << str <<endl;
			char *line = new char[99999999999999];
			delete [] line; 
		}
};

int main()
{
	try
	{
		c1 c("First");
	}
	catch(std::bad_alloc)
	{
		cout << "Referenced a lot of memory? Can't do that buddy." << endl;
	}
	return 0;
}
