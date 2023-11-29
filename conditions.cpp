#include <iostream>
using namespace std;

int main() {
	int x = 20;
	int y = 18;
	int time = 21;

	if (x > y) {
		cout << "x is greater than y";
	}
	
	if (x < y) {
		cout << "y is grater than x";
	}
	
	if (time < 18) {
		cout << "Good day";
	} else {
		cout << "Good evening";
	}
	
	if (time > 18) {
		cout << "Good night";
	} else if (time > 15) {
		cout << "Good evening";
	} else if (time > 12) {
		cout << "Good afternoon";
	} else {
		cout << "Good morning";
	}
	
	string result = (time > 18) ? "Good night" : "Good day";
	cout << result;
	
	return 0;
}
