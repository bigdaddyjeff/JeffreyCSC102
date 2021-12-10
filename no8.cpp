#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main()
{
	string str = "Pan Atlantic University";
	string str2 = "Pan Atlantic University";
	cout << "str.compare(str2): "<< str.compare(str2)<<endl;
	cout << "str.length(): "<< str.length()<<endl;
	cout << "str.size(): "<< str.size()<<endl;
	
	str.swap(str2);
	cout<< "Str.swap(str2): "<< str<< endl;
	 
	 int position = 0;
	 int number = 5;
	 cout << "str.substr(position,number): "<< str.substr(number)<<endl;	
	
}