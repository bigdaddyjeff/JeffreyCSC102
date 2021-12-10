#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct biodata
{
	string name;
	int dob;
};

int main()
{
	string mystr;
	
	biodata aname;
	biodata * pname;
	pname = &aname;
	
	cout<< "Enter name: ";
	getline (cin, pname -> name);
	cout << "Enter dob: ";
	getline(cin,mystr);
	(stringstream) mystr >> pname -> dob;
	
	cout << "\n You have entered: \n";
	cout << pname -> name;
	cout << "(" << pname -> dob << ") \n";
	
		cout << "\n You have entered: \n";
	cout << aname.name;
	cout << "(" << aname.dob << ") \n";
}
