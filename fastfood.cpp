#include <iostream>
using namespace std;

int main() {
	int num1, num2, num3;
	string burger, side, drink, nickname, conf;
	cout << "Welcome to MacoLo FastFood\n";
	cout << "Please enter your nickname(10 letters) : ";
	cin >> nickname;
	if(nickname.length() > 10) {
		cout << "Nickname is limited to 10 characters";
		return -1;
	}
	cout << "-----------------------------------------------------------------------\n";
	cout << "HAMBURGER\t:\t[1]Big Cheese\t[2]Sausage\t[3]Truffle\n";
	cout << "SIDE DISH\t:\t[4]French Fries\t[5]Onion Ring\t[6]Hashbrown\n";
	cout << "DRINKING\t:\t[7]Water\t[8]Juice\t[9]Coffee\n";
	cout << "-----------------------------------------------------------------------\n";
	cout << "What Hamburger do you want? (1/2/3) : ";
	cin >> num1;
	switch(num1) {
		case 1: burger = "Big Cheese"; break;
		case 2: burger = "Sausage"; break;
		case 3: burger = "Truffle"; break;
		default: {
			cout << "Incorrect number";
			return -1;
		}
	}
	cout << "What Side Dish do you want? (4/5/6) : ";
	cin >> num2;
	switch(num2) {
		case 4: side = "French Fries"; break;
		case 5: side = "Onion Ring"; break;
		case 6: side = "Hashbrown"; break;
		default: {
			cout << "Incorrect number";
			return -1;
		}
	}
	cout << "What Drinking do you want? (7/8/9) : ";
	cin >> num3;
	switch(num3) {
		case 7: drink = "Water"; break;
		case 8: drink = "Juice"; break;
		case 9: drink = "Coffee"; break;
		default: {
			cout << "Incorrect number";
			return -1;
		}
	}
	cout << "Please check your order\n";
	cout << "Hamburger : " << burger << "\n";
	cout << "Side Dish : " << side << "\n";
	cout << "Drinking : " << drink << "\n";
	cout << "Please confirm your order (yes/no) : ";
	cin >> conf;
	/*
	switch(conf) {
		case "yes": cout << "Thank you " << nickname; break;
		case "no": cout << "Goodbyes"; break;
		default: cout << "Only 'yes' or 'no' (case-sensitive)";
	}
	*/
	if(conf == "yes")
	{
		cout << "Thank you " << nickname;
	}
	else if(conf == "no")
	{
		cout << "Goodbyes";
	}
	else {
		cout << "Only 'yes' or 'no' (case-sensitive)";
		return -1;
	}
	
	return 0;
}
