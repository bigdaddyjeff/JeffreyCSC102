#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
 vector<int> g1;
 
 for (int i = 1; i <= 10; i++)
 g1.push_back(i * 10);
 
	vector <int> :: iterator i;
	
	for (i = g1.begin(); i != g1.end(); i ++)
	{
		*i = *i * 5;
	}
	
 cout << "\nReference operator [g] : g1[2] = " << g1[2];
 
 cout << "\nat : g1.at(4) = " << g1.at(4);
 
 cout << "\nfront() : g1.front() = " << g1.front();
 
 cout << "\nback() : g1.back() = " << g1.back();
 
 return 0;
}