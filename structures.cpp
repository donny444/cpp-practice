#include <iostream>
using namespace std;

int main() {
	struct {
		int myNum;
		string myString;
	} myStructure, hisStructure, herStructure;
	
	struct myDataType {
		int myNum;
		string myString;
	};
	
	myDataType myVar;
	
	myStructure.myNum = 4;
	myStructure.myString = "Hello Donny!";
	
	cout << myStructure.myNum << "\n";
	cout << myStructure.myString << "\n";
	
	return 0;
}
