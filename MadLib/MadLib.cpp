// MadLib.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int number;
	string adj;
	string location;
	string noun;
	string verb;
	string adj2;
	
	cout << "this is a MadLib enter the following prompt: ";
	cout << "enter a number: ";
	cin >> number;
	cout << "enter a adjective: ";
	cin >> adj;
	cout << "enter a location: ";
	cin >> location;
	cout << "enter a noun: ";
	cin >> noun;

	cout << "enter a verb: ";
	cin >> verb;
	cout << "enter a adjective: ";
	cin >> adj2;
	cout << "now all thing you have put in will become a short story ";

	cout << " Last weekend, I went on an adventure with " << number <<
	" friends. We decided to explore a "
		<< adj << " " + location << " While we were there, we found a " << noun << " that made us all " << verb << " It turned out to be the " << adj2 << " day ever!";


}
