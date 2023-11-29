#include <iostream>
using namespace std;

int main() {
	string food = "Basil";
	string &meal = food;
	
	cout << food << "\n";
	cout << meal << "\n";
	
	//Memory Address
	cout << &food;
	
	return 0;
}
