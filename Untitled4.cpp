#include <iostream>
using namespace std;

int main()
{
	int var = 18;
	int *ptr;
	int val;
	
	ptr = &var; // take the address of var
	val = *ptr; // take the value available at ptr
	
	cout << "Value of var: " << var << "\n";
	cout << "Value of ptr: " << ptr << endl;
	cout << "Value of var: " << val << endl;
	
	
}