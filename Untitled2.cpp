#include <iostream>
using namespace std;

int main()
{
	cout << "Calculate the volume of a cylinder "<<endl;
	const float pi = 3.14159;
	
	int height;
	cout << "What is the height of the cylinder? "<<endl;
	cin >> height;
	
	int radius;
	cout << "What is the radius of the cylinder? "<<endl;
	cin >> radius;
	
	float volume;
	volume = height * pi * radius * radius ;
	cout << volume;
}