#include "School.h"
#include "Student.h"
#include "Teacher.h"

School::~School()
{
	for (Human* human : m_humans)
	{
		delete human;
	}
	m_humans.clear();
}

void School::add(Human::Type type)
{
	Human* human = nullptr;
	switch (type)
	{
	case Human::Type::STUDENT:
		human =  new Student;
		break;
	case Human::Type::TEACHER:
		human =  new Teacher;
		break;
	default:
		break;
	}

	m_humans.push_back(human);
}

void School::Displayall()
{

	for (Human* human : m_humans)
	{
		human->Write();
	}
}
