#include <iostream>
using namespace std;

using letter = char;
using num = int ;
using field = char[5];

int main()
{
	letter x= 'a';
	num y =10; 
	num z = 5;
	field characters = "Hello world";
	
	num c = y + z;
	
	cout << "NUMBERS c = y + z So c =" << c << endl;
	cout << "field characters = " << characters << endl;
	cout << "C x= 'a', so x=" << x << endl;
}