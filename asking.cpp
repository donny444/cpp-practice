#include <iostream>
using namespace std;

int main()
{
	string food = "Boba Tea";
	string* foodAddress = &food;
	int ans;
	cout << "What you'd like to know\n";
	cout << "[1] The Food\n";
	cout << "[2] Food Address\n";
	cin >> ans;
	
	switch(ans) {
		case 1: cout << food; break;
		case 2: cout << foodAddress; break;
		default: cout << "Input only '1' or '2'";
	}
	
	return 0;
}
