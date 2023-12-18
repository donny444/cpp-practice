#include <iostream>
using namespace std;

int main() {
	int num, result = 1;
	
	cout << "Enter the number you want to find factorial of its: ";
	cin >> num;
	
	for(int i = num; i > 0; i--)
	{
		result *= i;
	}
	
	cout << "The factorial of " << num << " is " << result;
	return 0;
}
