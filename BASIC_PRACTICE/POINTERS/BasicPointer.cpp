#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name{"roy"};
	string *str_ptr{&name};

	cout << *str_ptr << endl;
	return 0;
}
