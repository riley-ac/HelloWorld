#include "Human.h"

void Human::Read()
{
	std::cout << "name: ";
	std::cin >> m_name;
	std::cout << "age: ";
	std::cin >> m_age;
}

void Human::Write()
{
	std::cout << "name: " << m_name;
	std::cout << "age: " << m_age;
}
