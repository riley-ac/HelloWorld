
#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <stack>
#include <map>
#include <unordered_map>

using namespace std;

unsigned int GetHash(std::string str)
{
	int hash = 0;
	//Raymond 
	// 65 35 42 15 43
	for (char c : str)
	{
		hash = hash * 31 + (int)c;

	}
	return 0;

}


int main() {
	//int i = 0xff;
	array<int, 5> arr = { 1,2, 3, 4, 5 };
	cout << arr.size() << endl;

	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << endl;

	}

	
	//cout << i << endl;
	
	
	//vector
	vector<int> vec = {1,2,3,4,5};
	vec.push_back(6);



	cout << vec.size() << endl;
	cout << vec.capacity() << endl;

	stack < int> s;
	s.push(1);


	/*cout << (&arr[0]) << endl;
	cout << (&arr[1]) << endl;*/
	

	cout << "hello world" << endl;

	//List
	list<int> lst = { 1, 2, 3, 4, 5, };
	lst.push_back(6);
	lst.insert(lst.begin(), 0);

	auto iter = lst.begin();
	cout << *iter << endl; // 0
	iter++;
	cout << *iter << endl;// 1




	//map
	map<string, int> m;
	m["riley"] = 46;
	m["garrete"] = 86;
	m["mike"] = 100;

	cout << m["riley"] << endl;
	for (auto iter =  m.begin();  iter != m.end(); iter++)
	{
		cout << iter->first << " " << iter->second << endl;
	}

	//unordered_map
	unordered_map<string, string> um;
	um["riley"] = "chartrand";
	um["garret"] = "morrise";



	string name = "Raymond";
	int hash = GetHash(name);
	cout << hash << endl;

	int data[10];
	data[hash % 10] = 84025;
	//bunch of stuff
	hash = GetHash("Raymond");
	cout << data[hash % 10] << endl;
}