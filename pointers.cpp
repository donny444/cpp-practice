#include <iostream>
using namespace std;

int main() {
	string food = "Pasta";
	string* ptr = &food;
	
	cout << food << "\n";
	cout << &food << "\n";
	cout << ptr << "\n";
	cout << *ptr << "\n"; //Dereference
	
	*ptr = "Hamburger";
	
	cout << *ptr << "\n";
	cout << food << "\n";
	
	return 0;
}
