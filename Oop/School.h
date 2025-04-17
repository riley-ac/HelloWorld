#pragma once
#include "Human.h"
#include <vector>
class School
{
public:
	~School();

	void add(Human::Type type);

	void Displayall();
	void School ::DisplayByType(Human::Type type)
	{
	}

private:
	std::vector<Human*> m_humans;


};
