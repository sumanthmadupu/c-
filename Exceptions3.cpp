#include<iostream>
#include<exception>
using namespace std;

class My_exception : public exception
{
	public:
	virtual const char* what() const throw()
	{
		return "This is from my_exception";
	}
};

class Another_exception : public My_exception
{
	public:
	virtual const char* what() const throw()
	{
		return "This is from another exception";
	}
};

void func()
{
	throw Another_exception();
}

int main()
{
	try
	{
		func();
	}
	catch(exception &e)
	{
		cout << "Catched Exception using exception base : " << e.what() << endl;
	}
	catch(My_exception &e)
	{
		cout << "Catched Exception using My_exception : " << e.what() << endl;
	}
	catch(Another_exception &e)
	{
		cout << "Catched Exception using Another_exception : " << e.what() << endl;
	}
	return 0;
}
