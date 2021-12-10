#include <iostream>
using namespace std;

int main()
{
	int x = 27;
	int *ip;
	ip = &x;
	cout << "The value of x is: " << x <<endl;
	cout << "The value of ip is: " << ip <<endl;
	cout << "The value of *ip is: " << *ip <<endl;
}