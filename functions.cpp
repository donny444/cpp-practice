#include <iostream>
using namespace std;

// Function declaration
void myFunction();
void myName(string fname);
void myCountry(string country = "United States");
int summation(int operand1, int operand2);
float summation(float operand1, float operand2);

void swapNums(int &x, int &y)
{
	int z = x;
	x = y;
	y = z;
}

int main()
{
	int firstNum = 10;
	int secondNum = 20;
	
	myFunction();
	myFunction();
	myFunction();
	myName("Ynnod");
	myName("Nonyd");
	myName("Dnyon");
	myCountry();
	myCountry("Thailand");
	myCountry("Greenland");
	cout << summation(2, 2);
	cout << summation(9, 2);
	cout << summation(3.4, 5.4);
	
	cout << "Before swap: " << "\n";
	cout << firstNum << secondNum << "\n";
	swapNums(firstNum, secondNum);
	cout << "After swap: " << "\n";
	cout << firstNum << secondNum << "\n";
	
	return 0;
}

// Function definition
void myFunction()
{
	cout << "I just got executed!\n";
}

void myName(string fname)
{
	cout << fname << " Refsnes\n";
}

void myCountry(string country)
{
	cout << "My homeland is " << country << "\n";
}

int summation(int operand1, int operand2)
{
	return operand1 + operand2;
}
float summation(float operand1, float operand2)
{
	return operand1 + operand2;
}
