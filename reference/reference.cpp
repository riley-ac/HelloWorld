

#include <iostream>

void func1(int* p) {
	if (p) *p = 5;
}


void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{

	int i1 = 5;
	
	int i2 = 20;
	int* p1 = &i1;

	p1 = nullptr;
	func1(p1);
	int& r1 = 10;

	int& r1 = i1;

	swap(&i1, &i2);

	//std::cout << i1 << std::endl;
	//std::cout << r1 << std::endl;
	//std::cout << i1 << std::endl;







}

