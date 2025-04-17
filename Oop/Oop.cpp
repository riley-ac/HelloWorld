


#include "School.h"
#include <vector>
#include "Teacher.h"
#include "Human.h"
#include "Student.h"
#include <iostream>



int main()
{
	School school;

	bool quit = false;
	while (quit)
	{
		
		// display menu

		std::cout << " 1) ADD Human\n";
		std::cout << " 1) Display All Human\n";
		std::cout << " 1) Display all Human types\n";
		std::cout << " 1) Quit\n";
	}

	unsigned short selection;
	std::cin >> selection;

	switch (selection)
	{
	case 1:
	std::cout << "1) Student\n";
	std::cout << "2) Teacher\n";
		unsigned short type;
		std:: cin >> type;
		break;
	case 2:
		system("cls");
		break;
	case 3:

		break;
	case 4:

		break;

	
	}

	school.add(Human::Type::STUDENT);
	school.Displayall();
	void DisplayAll();


}