#include <iostream>
using namespace std;

int main() {
	string cars[4] = {"TATA", "Tesla", "BYD", "NETA"};
	int myNums[3] = {10, 20, 30};
	string grades[] = {"A", "B", "C", "D", "F"};
	string AI[2];
	
	AI[0] = "MidJourney";
	AI[1] = "Bard",
	
	cout << cars[2];
	myNums[2] = 40;
	cout << sizeof(grades);
	
	int getArrayLength = sizeof(grades) / sizeof(string);
	cout << getArrayLength;
	
	for (int i = 0; i < 4; i++) {
		cout << cars[i] << "\n";
	}
	
	return 0;
}
