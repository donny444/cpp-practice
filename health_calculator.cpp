#include <iostream>
using namespace std;

int weight, height, age, bmi, bmr, tdee;
string sex;
float frequency;

void input();
void calculate();
void output();

int main()
{
	cout << "Health Calculator\n";
	cout << "-----------------\n";
	
	input();
	calculate();
	output();
}

void input()
{
	cout << "Your weight(kg): ";
	cin >> weight;
	cout << "Your height(cm): ";
	cin >> height;
	cout << "Your age: ";
	cin >> age;
	cout << "Your sex: ";
	cin >> sex;
	char select;
	cout << "How frequently do you workout:\n";
	cout << "a) rarely or never\n";
	cout << "b) 1-3 times per week\n";
	cout << "c) 4-5 times per week\n";
	cout << "d) 6-7 times per week\n";
	cout << "e) up to 2 times per day\n";
	cin >> select;
	if(select == "a")
	{
		frequency = 1.2;
	}
	if(select == "b")
	{
		frequency = 1.375;
	}
	if(select == "c")
	{
		frequency = 1.55;
	}
	if(select == "d")
	{
		frequency = 1.7;
	}
	if(select == "e")
	{
		frequency = 1.9;
	}
}

void calculate() {
	bmi = weight/((height*height)/10000);
	if(sex == "male")
	{
		bmr = 66+(13.7*weight)+(5*height)+(6.8*age);
	}
	if(sex == "female")
	{
		bmr = 665+(9.6*weight)+(1.8*height)+(4.7*age);
	}
	tdee = frequency*bmr;
}

void output()
{
	cout << "BMI Value = " << bmi;
	cout << "BMR Value = " << bmr;
	cout << "TDEE Value = " << tdee;	
}
