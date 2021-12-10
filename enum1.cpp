#include <iostream>
using namespace std;

enum class week{ sunday , monday, tuesday, wednesday, thursday, friday, saturday
};
int main()
{
	week today;
	today = week ::monday;
	cout << sizeof(today);
	cout<< "Day" << today +1 ;
	
}