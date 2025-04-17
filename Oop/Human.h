#pragma once
#include <iostream>
#include "Human.h"

using age_t = unsigned short;


class Human
{
public:
    enum class Type : unsigned short
    {
        STUDENT,
        TEACHER
    };
    /*const int STUDENT
        const int TEACHER*/
    Human()
    {
        std::cout << "constructor\n";
        m_count++;
    }
    Human(std::string name, unsigned short age) :
        m_name{ name },
        m_age{ age }
    {
        std::cout << "constructor\n";

    }
    ~Human()
    {
        std::cout << "destructor\n";
        m_count--;

    }

    void Read();
    void Write();
    
    std::string GetName() { return m_name; }
    age_t GetAge() { return m_age; }
    void SetAge(age_t age);

    virtual

    static int GetCount() { return m_count; }

private:
    std::string m_name;
    unsigned short m_age = 0;
    static int m_count;
    static const float m_tax;
}

int Human::m_count = 0;
const float Human::m_tax = 0.0025f;