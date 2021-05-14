#include<iostream>
#include<exception>
using namespace std;

void aFunction()
{
	int a = 3;
	
	if(a==3)
	{
		throw "This is a string exception";
	}
	if(a==6)
	{
		throw string("This is another string exception");
	}
	if(a==9)
	{
		throw int(9);
	}
	if(a==36)
	{
		throw float(3.6);
	}
}
int main()
{
	try
	{
		aFunction();
	}
	catch(char const* e)
	{
		cout << "Exception occured and resolved : " << e << endl;
	}
	catch(string e)
	{
		cout << "Exception occured and resolved : " << e << endl;
	}
	catch(int e)
	{
		cout << "Exception occured and resolved : " << e << endl;
	}
	catch(float e)
	{
		cout << "Exception occured and resolved : " << e << endl;
	}
	catch(int e)
	{
		cout << "Exception occured and resolved : " << e << endl;
	}
	return 0;
}
