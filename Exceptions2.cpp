#include<iostream>
#include<exception>

using namespace std;

class MyException: public exception
{
	public:
	virtual const char* what() const throw()
  	{
    	return "My exception happened";
  	}
};

void Func()
{
	throw MyException();
}

int main()
{
	try
	{
		Func();
	}
	catch(MyException &e)
	{
		cout << e.what() << endl;
	}
	return 0;
}
