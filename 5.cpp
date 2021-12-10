#include <iostream>
using namespace std;


	int addition(int a, int b)
	{
		int r;
		r = a + b;
	
	
}

int main()
{
	int z,number1,number2;
	cout<<"What is the first value? "<<endl;
	cin>>number1;
	cout<<"What is the second value? "<<endl;
	cin>>number2;
	z = addition(number1,number2);
	cout << "The result is " << z;
}