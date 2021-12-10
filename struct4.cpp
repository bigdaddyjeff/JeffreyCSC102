#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct biodata
{
	string name;
	int dob;
};

struct csc211
{
	biodata data;
	int score;
};

csc21nnnhhn1 student1;

int main()
{
	cout << "Enter students name:";
	cin>> student1.data.name;
	
	cout << "Enter students age:";
	cin>> student1.data.dob;
	
		cout << "Enter students csc211 score:";
	cin>> student1.score;
	
		cout << "The students name is" << student1.data.name<< endl;
		cout << "The students age is" << student1.data.dob<< endl;
		cout << "The students score for csc211 is" << student1.score<< endl;
}