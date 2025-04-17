

#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <iterator>
#include <string>
#include <array>

using namespace std;

string week() {
		array<string, 7> dayOfTheWeek = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };

		for (size_t i = 0; i < dayOfTheWeek.size(); i++)
		{
			cout << dayOfTheWeek[i] << endl;
		}
};

int num() {
	vector <int> numbers = { 1,2,3,4,5 };
	numbers.push_back(2);
	numbers.pop_back();

	for (size_t i = 0; i < numbers.size(); i++)
	{
		cout << numbers[i] << endl;
		numbers.push_back(2);
		numbers.pop_back();
	}
}


string fruit() {
	list<string> fruits = { "apple", "banana", "kiwi" };
	fruits.push_back("dragon fruit");
	fruits.push_front("guava");
	fruits.remove("apple");

	for (auto iter = fruits.begin(); iter != fruits.end(); iter++)
	{
		cout << *iter << endl;
	}
}

string maPO() {
	map<string, int> mapo;
	mapo["guava"] = 7;
	mapo["banana"] = 90;
	mapo["apple"] = 1;
	mapo["apple"] = mapo["apple"] + 5;

	for (auto iter = mapo.begin(); iter != mapo.end(); iter++)
	{
		cout << iter->first << endl;
		cout << iter->second << endl;
	}
	
}

	int main()
	{
		maPO();
		fruit();
		num();
		week();

	}




