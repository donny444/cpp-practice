#include <iostream>
using namespace std;

int main() {
	int ham, sid, dri;
	string fin, nic;
	cout << "Welcome to MacoLo FastFood\n";
	cout << "Please enter your nickname(10 letters) : ";
	cin >> nic;
	cout << "-----------------------------------------------------------------------\n";
	cout << "HAMBURGER\t:[1]Big Cheese\t[2]Sausage\t[3]Truffle\n";
	cout << "SIDE DISH\t:\tF[4]rench Fries\t[5]Onion Ring\t[6]Hashbrown\n";
	cout << "DRINKING\t:\t[7]Water\t[8]Pepsi\t[9]Coffee\n";
	cout << "-----------------------------------------------------------------------\n";
	cout << "What Hamburger do you want? (1/2/3) : ";
	cin >> ham;
	cout << "What Side Dish do you want? (4/5/6) : ";
	cin >> sid;
	cout << "What Drinking do you want? (7/8/9) : ";
	cin >> dri;
	cout << "Please check your order\n";
	cout << "Hamburger Number : " << ham << "\n";
	cout << "Side Dish Number : " << sid << "\n";
	cout << "Drinking Number : " << dri << "\n";
	cout << "Please confirm your order (yes/no) : ";
	cin >> fin;
	if(fin == "yes")
	{
		cout << "Thank you " << nic;
	}
	else if(fin == "no")
	{
		cout << "Goodbyes";
	}
	else {
		cout << "Only 'yes' or 'no'";
	}
}
