
#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <stack>
#include <map>

using namespace std;


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

	/*cout << (&arr[0]) << endl;
	cout << (&arr[1]) << endl;*/
	

	cout << "hello world" << endl;

	//List
	list<int> lst = { 1, 2, 3, 4, 5, };
	lst.push_back(6);
	lst.insert(lst.begin(), 0);



	//map
	map<string, int> m;
	m["riley"] = 46;
	m["garrete"] = 86;
	m["mike"] = 100;

	cout << m["riley"] << endl;



}