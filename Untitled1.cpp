#include <iostream>
using namespace std;

int main()
{
	cout << "Convert temperature in Kelvin to Fahrenheit";
	int temp;
	cout << "what is the temperature in kelvin?";
	cin >> temp;
	
	float far;
	far = (((temp - 273.15) * 9)/5 ) + 32;
	cout << far;
}