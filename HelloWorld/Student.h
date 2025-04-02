#pragma once
#include "iostream"
#include <string>
void f();

class Student
{

public:

    Student(){}
    Student(std::string name) { this->m_name = name; }

    void Write();
    std::string GetName() { return m_name;}
    void SetName(std::string m_name) { m_name = m_name; }
private:
    std::string m_name;


};